/*根据输入的日期，计算是这一年的第几天。
详细描述：输入某年某月某日，判断这一天是这一年的第几天？
接口设计及说明：
****************************************************************************
Description   : 数据转换
Input Param   : year 输入年份
Month 输入月份
Day 输入天

Output Param  :
Return Value  : 成功返回0，失败返回-1（如：数据错误）
****************************************************************************
public static int iConverDateToDay(int year, int month, int day)
{
	在这里实现功能，将结果填入输入数组中
	return 0;
}

****************************************************************************
Description   :
Input Param   :

Output Param  :
Return Value  : 成功:返回outDay输出计算后的第几天;
失败:返回-1
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