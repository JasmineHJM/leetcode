//һ�����������Էֽ��һ����������Ļ�������36 = 2 * 2 * 3 * 3��������2��3�������ӡ�
//NowCoder������о����Ӹ����ķֲ����ɣ����ڸ���һϵ������������ϣ���㿪��һ���������ÿ�������������Ӹ�����
//
//�������� :��������������ݡ�ÿ�����ݽ���һ������n(2��n��100000)��
//������� :��Ӧÿ����������������Ӹ�����ÿ�����ռһ�С�


//C++�ݹ�
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

//������
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
	int number = 0;
	//scanf����ֵΪ��ȷ�������ݵı�����������һ��������û�гɹ���ȡ����ʱ����ʱ����-1
	while (scanf("%d", &number) != -1) {
		//���Ӹ���
		int count = 0;
		//ֻ��Ҫ��[2, sqrt(number)]��̽����
		int maxEle = sqrt(number);
		for (int i = 2; i <= maxEle && number != 1; ++i) {
			//����ֽܷ��i����һֱ�ֽ��i��ֱ�������ٷֽ⣬�������Ա���ֽ��i�ı�����i�ı���һ���Ǻ�����
			if (number % i == 0) {
				++count;//���Ӹ�������
				while (number % i == 0) {
					number /= i;
				}
			}
		}
		//������number > 1,˵������һ���������ӣ����統����2��3ʱ����û�н���forѭ��
		printf("%d\n", number > 1 ? count + 1 : count);
	}
	return 0;
}



//������
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

