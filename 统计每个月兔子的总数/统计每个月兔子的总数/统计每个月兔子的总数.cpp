//��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�
//С���ӳ����������º�ÿ��������һֻ���ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣�

//��������:����int�ͱ�ʾmonth
//������� :�����������int��

#include <iostream>
using namespace std;

int main(){
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;//a:һ������������b����������������c�����������Ӹ���
		while (--m){//ÿ��һ�����������仯
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
}


//������
#include<iostream>
using namespace std;

int getTotalCount(int month){
	int count;
	if (month < 3)
		count = 1;
	else
		count = getTotalCount(month - 1) + getTotalCount(month - 2);
	return count;
}
int main(){
	int month;
	while (cin >> month){
		cout << getTotalCount(month) << endl;
	}
	return 0;
}