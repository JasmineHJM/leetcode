//NowCoder����һ����͵꣬��ҵ�Ŀ��˶��и���ֵ��ã�����ֻҪ����ҵ�Թ�һ����ͣ��ͻ�ÿ�춼������
//���ң�����������ҵ����������ͺ󣬽�����ÿ�춼���һλ������һ����Ʒ����
//���ǣ���ҵ�Ŀ��˴����һ���˷�չ�ɺƺƵ����ɰ���ǧ�ˣ�1��1��2��3��5����
//���ڣ�NowCoder�������æͳ��һ�£�ĳһ��ʱ�䷶Χ�����ܹ��������ٷ���ͣ�����ÿλ����ֻ��һ����ͣ���
//
//�������� :�������ݰ������顣
//          ÿ�����ݰ�����������from��to(1��from��to��80)���ֱ������ĵ�from��͵�to�졣
//������� :��Ӧÿһ�����룬�����from��to��Щ�������from��to���죩����Ҫ�����ٷ���͡�

//��쳲��������еķ�Χ��

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int from, to;
	while (cin >> from >> to){
		long sum = 0, a = 1, b = 1;
		for (int i = 0; i < to; ++i){
			if (i >= from - 1)
				sum += a;
			swap(a, b);
			b += a;
		}
		cout << sum << endl;
	}
	return 0;
}



//Fibonacci���� from λ�õ� to λ�� Ԫ�غͣ�ע�ⲻҪ�����
#include<iostream>
using namespace std;
int main(){
	long long arr[80] = { 1, 1 };
	for (int i = 2; i<80; i++){
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int from = 0, to = 0;

	while (cin >> from >> to){
		long long res = 0;
		for (int i = from; i <= to; i++){
			res = res + arr[i - 1];
		}
		cout << res << endl;
	}
	return 0;
}
