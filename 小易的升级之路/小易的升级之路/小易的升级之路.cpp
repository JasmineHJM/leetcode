//小易经常沉迷于网络游戏.有一次, 他在玩一个打怪升级的游戏, 他的角色的初始能力值为 a.
//在接下来的一段时间内, 他将会依次遇见n个怪物, 每个怪物的防御力为b1, b2, b3...bn.
//如果遇到的怪物防御力bi小于等于小易的当前能力值c, 那么他就能轻松打败怪物, 并 且使得自己的能力值增加bi; 
//如果bi大于c, 那他也能打败怪物, 但他的能力值只能增加bi 与c的最大公约数.
//那么问题来了, 在一系列的锻炼后, 小易的最终能力值为多少 ?
//
//输入描述 :对于每组数据, 第一行是两个整数n(1≤n<100000)表示怪物的数量和a表示小易的初始能力值.
//	 第二行n个整数, b1, b2...bn(1≤bi≤n)表示每个怪物的防御力
//输出描述 :对于每组数据, 输出一行.每行仅包含一个整数, 表示小易的最终能力值

#include<iostream>
using namespace std;
int gcb(int a, int b){
	if (b == 0)
		return a;
	return gcb(b, a%b);
}

int main(){
	int n, cap;
	while (cin >> n >> cap){
		for (int i = 0; i<n; i++){
			int tmp;
			cin >> tmp;
			if (tmp <= cap){
				cap += tmp;
			}
			else if (tmp > cap){
				cap += gcb(tmp, cap);
			}
		}
		cout << cap << "\n";
	}

	return 0;
}



#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	int n, a, in, get_power = 0;
	vector<int> power_;
	while (cin >> n >> a){
		power_.clear();
		get_power = a;
		if (n == 0){
			cout << a << endl;
			continue;
		}
		for (int i = 0; i < n; i++){
			cin >> in;
			power_.push_back(in);
		}
		for (int i = 0; i < n; i++){
			if (get_power >= power_[i]){
				get_power += power_[i];
			}
			else{
				get_power += gcd(get_power, power_[i]);
			}
		}
		cout << get_power << endl;
	}
	return 0;
}
