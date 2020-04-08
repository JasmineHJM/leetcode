//因子分解，就是把给定的正整数a，分解成若干个素数的乘积，
//即 a = a1 × a2 × a3 × ... × an, 并且 1 < a1 ≤ a2 ≤ a3 ≤ ... ≤ an。
//其中a1、a2、...、an均为素数。 先给出一个整数a，请输出分解后的因子。
//
//输入描述 :输入包含多组数据，每组数据包含一个正整数a（2≤a≤1000000）。
//输出描述 :对应每组数据，以“a = a1 * a2 * a3...”的形式输出因式分解后的结果。

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num;
	while (cin >> num){
		cout << num << " = ";
		int* num1 = new int[1000];
		int j = 0;
		for (int i = 2; i <= sqrt(num); i++){
			while (num % i == 0){
				if (num != 1){
					num1[j] = i;
					j++;
					num /= i;
				}
			}
		}
		if (num != 1){
			num1[j] = num;
			j++;
		}
		for (int k = 0; k < j; k++){
			cout << num1[k];
			if (k + 1 < j){
				cout << " * ";
			}
		}
		cout << endl;
	}
	return 0;
}



#include <iostream>
using namespace std;
int main(){
	int a = 0, i = 0;
	while (cin >> a){
		cout << a << " = ";
		i = 2;
		while (1) {  //找到第一个可以整除的素数，为了格式的操作
			if (a % i == 0){
				cout << i;
				a = a / i;
				break;
			}
			i++;
		}
		while (a != 1) {  //找到剩余可以整除的素数
			i = 2;
			while (1){
				if (a % i == 0){
					cout << " * " << i;
					a = a / i;            //a一直在不断地减小
					break;
				}
				i++;
			}
		}
		cout << endl;
	}
	return 0;
}
