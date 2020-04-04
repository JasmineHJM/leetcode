//找来的零钱中有假币，一不小心把它混进了一堆真币里面去了。
//只知道假币的重量比真币的质量要轻，给你一个天平（天平两端能容纳无限个硬币）
//请用最快的时间把那个可恶的假币找出来。

//输入描述:1≤n≤2 ^ 30, 输入0结束程序。
//输出描述 :最多要称几次一定能把那个假币找出来？

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	//scanf返回值为正确输入数据的变量个数，当一个变量都没有成功获取数据时，此时返回-1
	while (scanf("%d", &n) != -1) {
		if (n == 0) {
			break;
		}
		int count = 0;
		while (n > 1) {
			count += 1;
			//每次取1/3,如果不能整除3，有两种情况
			//剩余1个，分成 1/3 、1/3 、1 + (1/3) ，两个1/3放入天平两端，
			//剩余2个，分成 1/3 、1 + (1/3) 、 1 + (1/3)，两个1 + (1/3)放入天平两端
			//由于题目要求最快的时间，并且是求最多的次数，因此取每次剩余的最大值 1 + (1/3)
			n = n / 3 + (n % 3 > 0);
		}
		printf("%d\n", count);
	}
	return 0;
}
