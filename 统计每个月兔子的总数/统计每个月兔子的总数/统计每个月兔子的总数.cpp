//有一只兔子，从出生后第3个月起每个月都生一只兔子，
//小兔子长到第三个月后每个月又生一只兔子，
//假如兔子都不死，问每个月的兔子总数为多少？

//输入描述:输入int型表示month
//输出描述 :输出兔子总数int型

#include <iostream>
using namespace std;

int main(){
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;//a:一个月兔子数，b：两个月兔子数，c：三个月兔子个数
		while (--m){//每过一个月兔子数变化
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
}


//方法二
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