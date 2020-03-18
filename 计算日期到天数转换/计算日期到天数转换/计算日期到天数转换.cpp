/*������������ڣ���������һ��ĵڼ��졣
��ϸ����������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
�ӿ���Ƽ�˵����
****************************************************************************
Description   : ����ת��
Input Param   : year �������
Month �����·�
Day ������

Output Param  :
Return Value  : �ɹ�����0��ʧ�ܷ���-1���磺���ݴ���
****************************************************************************
public static int iConverDateToDay(int year, int month, int day)
{
	������ʵ�ֹ��ܣ��������������������
	return 0;
}

****************************************************************************
Description   :
Input Param   :

Output Param  :
Return Value  : �ɹ�:����outDay��������ĵڼ���;
ʧ��:����-1
****************************************************************************
public static int getOutDay()
{
	return 0;
}
*/

#include<iostream>
using namespace std;
int dataToDay(int year, int month, int day)
{
	if (year <= 0 || month <= 0 || month>12 || day>31 || day <= 0) return -1;
	int lemp[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int Nolemp[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	bool flag;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		flag = true;
	else
		flag = false;
	if (flag)
	{
		if (day>lemp[month - 1]) return -1;
	}
	else
	{
		if (day>Nolemp[month - 1]) return -1;
	}
	int temp = 0;
	for (int i = 0; i<month - 1; i++)
	{
		if (flag)
			temp = temp + lemp[i];
		else
			temp = temp + Nolemp[i];
	}
	return temp + day;
}

int main()
{
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		cout << dataToDay(year, month, day) << endl;
	}

}

/*
#include <iostream>
using namespace std;
int main()
{
	int year, month, day;
	int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (cin >> year >> month >> day)
	{
		int day_num = 0;
		if (year % 4 == 0)
			month_day[1] = 29;
		else
			month_day[1] = 28;
		for (int i = 0; i<month - 1; ++i)
			day_num += month_day[i];
		day_num += day;
		cout << day_num << endl;
	}
	return 0;
}
*/