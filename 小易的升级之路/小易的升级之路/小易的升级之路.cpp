//С�׾���������������Ϸ.��һ��, ������һ�������������Ϸ, ���Ľ�ɫ�ĳ�ʼ����ֵΪ a.
//�ڽ�������һ��ʱ����, ��������������n������, ÿ������ķ�����Ϊb1, b2, b3...bn.
//��������Ĺ��������biС�ڵ���С�׵ĵ�ǰ����ֵc, ��ô���������ɴ�ܹ���, �� ��ʹ���Լ�������ֵ����bi; 
//���bi����c, ����Ҳ�ܴ�ܹ���, ����������ֵֻ������bi ��c�����Լ��.
//��ô��������, ��һϵ�еĶ�����, С�׵���������ֵΪ���� ?
//
//�������� :����ÿ������, ��һ������������n(1��n<100000)��ʾ�����������a��ʾС�׵ĳ�ʼ����ֵ.
//	 �ڶ���n������, b1, b2...bn(1��bi��n)��ʾÿ������ķ�����
//������� :����ÿ������, ���һ��.ÿ�н�����һ������, ��ʾС�׵���������ֵ

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
