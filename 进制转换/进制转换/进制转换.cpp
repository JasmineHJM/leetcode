//����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������
#include<iostream>
using namespace std;

int main()
{
	//val��ʾͨ������ת����M��N������
	string val = "";
	//�Ӷ����Ƶ�ʮ�����Ƶ����ļ���
	string tables = "0123456789ABCDEF";
	//����ĳ����M������Ҫת���Ľ���N
	int M = 0;
	int N = 0;
	cin >> M >> N;
	if (M == 0){
		val = "0";
	}
	while (M){
		if (M < 0){
			M = -M;
			cout << "-";
		}
		val = tables[M%N] + val;
		M /= N;
	}
	cout << val.c_str() << endl;
	return 0;
}
