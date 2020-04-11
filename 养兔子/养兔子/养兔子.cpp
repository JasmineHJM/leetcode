//一只成熟的兔子每天能产下一胎兔子。每只小兔子的成熟期是一天。 
//某人领养了一只小兔子，请问第N天以后，他将会得到多少只兔子。
//
//输入描述 :测试数据包括多组，每组一行，为整数n(1≤n≤90)。
//输出描述 :对应输出第n天有几只兔子(假设没有兔子死亡现象)。


#include<iostream>
using namespace std;
int main(){
	int n = 0;
	long arr[91] = { 1, 1 };
	for (int i = 2; i<91; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	while (cin >> n)
		cout << arr[n] << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int n;
	long long a[100];
	a[1] = 1;
	a[2] = 2;
	while (cin >> n){
		for (int i = 3; i <= n; i++){
			a[i] = a[i - 1] + a[i - 2];
		}
		cout << a[n] << endl;
	}
}


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
	int number = 0;
	//scanf返回值为正确输出数据的变量个数，当一个变量都没有
	//获取到数据时，此时返回-1
	while (scanf("%d", &number) != -1) {
		if (number < 4) {
			//计算可知第一天1只，第2天2只，第3天3只
			printf("%d\n", number);
		}
		else {
			//递推第i(i ≥ 4)天的兔子f(i) = f(i - 1) + f(i - 2)
			long long before = 2, now = 3, next = 0;
			for (int i = 4; i <= number; ++i) {
				//f(i) = f(i - 1) + f(i - 2)
				next = before + now;
				//更新f(i - 2) = f(i - 1), f(i - 1) = f(i)
				before = now;
				now = next;
			}
			printf("%lld\n", now);
		}
	}
	return 0;
}
