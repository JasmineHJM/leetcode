//һֻ���������ÿ���ܲ���һ̥���ӡ�ÿֻС���ӵĳ�������һ�졣 
//ĳ��������һֻС���ӣ����ʵ�N���Ժ�������õ�����ֻ���ӡ�
//
//�������� :�������ݰ������飬ÿ��һ�У�Ϊ����n(1��n��90)��
//������� :��Ӧ�����n���м�ֻ����(����û��������������)��


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
	//scanf����ֵΪ��ȷ������ݵı�����������һ��������û��
	//��ȡ������ʱ����ʱ����-1
	while (scanf("%d", &number) != -1) {
		if (number < 4) {
			//�����֪��һ��1ֻ����2��2ֻ����3��3ֻ
			printf("%d\n", number);
		}
		else {
			//���Ƶ�i(i �� 4)�������f(i) = f(i - 1) + f(i - 2)
			long long before = 2, now = 3, next = 0;
			for (int i = 4; i <= number; ++i) {
				//f(i) = f(i - 1) + f(i - 2)
				next = before + now;
				//����f(i - 2) = f(i - 1), f(i - 1) = f(i)
				before = now;
				now = next;
			}
			printf("%lld\n", now);
		}
	}
	return 0;
}
