//给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
#include<iostream>
using namespace std;

int main()
{
	//val表示通过进制转换后M的N进制数
	string val = "";
	//从二进制到十六进制的数的集合
	string tables = "0123456789ABCDEF";
	//输入某个数M，和需要转换的进制N
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
