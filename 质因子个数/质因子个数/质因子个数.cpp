//一个正整数可以分解成一个或多个数组的积。例如36 = 2 * 2 * 3 * 3，即包含2和3两个因子。
//NowCoder最近在研究因子个数的分布规律，现在给出一系列正整数，他希望你开发一个程序输出每个正整数的因子个数。
//
//输入描述 :输入包括多组数据。每组数据仅有一个整数n(2≤n≤100000)。
//输出描述 :对应每个整数，输出其因子个数，每个结果占一行。


//C++递归
#include <iostream>
#include <stdio.h>

using namespace std;

int cnt;
bool isPrime(int n){
	if (n<2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i*i <= n; i += 2){
		if (n%i == 0) return false;
	}
	return true;
}

void countFactors(int n, int start){
	if (isPrime(n)){
		cnt++; return;
	}
	else{
		for (int i = start; i<n; i++){
			if (0 == n%i) {
				cnt++;
				while (0 == n%i){
					n /= i;
				}
				countFactors(n, i + 1);
				return;
			}
		}
	}
}

int main(){
	int n;
	while (~scanf("%d", &n)){
		cnt = 0;
		countFactors(n, 2);
		printf("%d\n", cnt);
	}
	return 0;
}

//方法二
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
	int number = 0;
	//scanf返回值为正确输入数据的变量个数，当一个变量都没有成功获取数据时，此时返回-1
	while (scanf("%d", &number) != -1) {
		//因子个数
		int count = 0;
		//只需要从[2, sqrt(number)]试探即可
		int maxEle = sqrt(number);
		for (int i = 2; i <= maxEle && number != 1; ++i) {
			//如果能分解出i，则一直分解出i，直到不能再分解，这样可以避免分解出i的倍数（i的倍数一定是合数）
			if (number % i == 0) {
				++count;//因子个数自增
				while (number % i == 0) {
					number /= i;
				}
			}
		}
		//如果最后number > 1,说明还有一个素数因子，比如当输入2、3时，并没有进入for循环
		printf("%d\n", number > 1 ? count + 1 : count);
	}
	return 0;
}



//方法三
#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int n, k, i;
	while (cin >> n){
		k = 0;
		for (i = 2; i <= sqrt(n); i++)
		if (n%i == 0){
			while (n%i == 0)n = n / i;
			k++;
		}
		if (n != 1)k++;
		cout << k << endl;
	}
	return 0;
}

