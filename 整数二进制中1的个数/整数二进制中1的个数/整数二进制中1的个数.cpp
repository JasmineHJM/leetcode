//��������:����һ������
//������� :����������������1�ĸ���

#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int count = 0;
		while (n > 0){
			if (n & 1) 
				++count;
			n >>= 1;
		}
		cout << count << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;

void findNumberOf1(int num){
	int count = 0;
	while (num){
		count++;
		num &= num - 1;//����λ����
	}
	cout << count << endl;

	return;
}

int main(){
	int intnum;
	while (cin >> intnum){
		findNumberOf1(intnum);
	}
	return 0;
}
