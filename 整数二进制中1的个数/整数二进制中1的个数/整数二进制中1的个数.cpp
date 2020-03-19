//输入描述:输入一个整数
//输出描述 :计算整数二进制中1的个数

#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int count = 0;
		while (n > 0){
			if (n & 1) 
				++count;
			n >>= 1;
		}
		cout << count << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;

void findNumberOf1(int num){
	int count = 0;
	while (num){
		count++;
		num &= num - 1;//经典位操作
	}
	cout << count << endl;

	return;
}

int main(){
	int intnum;
	while (cin >> intnum){
		findNumberOf1(intnum);
	}
	return 0;
}
