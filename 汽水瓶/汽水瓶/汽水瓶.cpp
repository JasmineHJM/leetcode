//输入描述 :输入文件最多包含10组测试数据，每个数据占一行，仅包含一个正整数n（1 <= n <= 100），表示小张手上的空汽水瓶数。
//	        n = 0表示输入结束，你的程序不应当处理这一行。
//输出描述 :对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。

//方法一：通过数学分析，最后获得的饮料数是总空瓶数整除2 。
#include<stdio.h>
int main(){
	int m;
	while (~scanf("%d", &m) && m != 0) printf("%d\n", m / 2);
	return 0;
}

//方法二：递归
/*
3个瓶子换1瓶水 + 1个空瓶子，两个瓶子换1瓶水 + 0个空瓶子，1个瓶子换0瓶水。
f(1) = 0
f(2) = 1
f(3) = 1
f(4) = f(2) + 1    //4个瓶子，其中3个可以换1瓶水+1个空瓶，所以是f(2)+1
f(5) = f(3) + 1    //3个瓶子换1瓶水+1个空瓶，所以是f(3)+1
...
f(n) = f(n - 2) + 1 
*/
#include <iostream>

using namespace std;

int f(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;
	return f(n - 2) + 1;
}
int main(){
	int n;
	while (cin >> n){
		if (n == 0)
			break;
		cout << f(n) << endl;
	}
	return 0;
}
