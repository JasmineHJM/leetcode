//���ӷֽ⣬���ǰѸ�����������a���ֽ�����ɸ������ĳ˻���
//�� a = a1 �� a2 �� a3 �� ... �� an, ���� 1 < a1 �� a2 �� a3 �� ... �� an��
//����a1��a2��...��an��Ϊ������ �ȸ���һ������a��������ֽ������ӡ�
//
//�������� :��������������ݣ�ÿ�����ݰ���һ��������a��2��a��1000000����
//������� :��Ӧÿ�����ݣ��ԡ�a = a1 * a2 * a3...������ʽ�����ʽ�ֽ��Ľ����

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
		while (1) {  //�ҵ���һ������������������Ϊ�˸�ʽ�Ĳ���
			if (a % i == 0){
				cout << i;
				a = a / i;
				break;
			}
			i++;
		}
		while (a != 1) {  //�ҵ�ʣ���������������
			i = 2;
			while (1){
				if (a % i == 0){
					cout << " * " << i;
					a = a / i;            //aһֱ�ڲ��ϵؼ�С
					break;
				}
				i++;
			}
		}
		cout << endl;
	}
	return 0;
}
