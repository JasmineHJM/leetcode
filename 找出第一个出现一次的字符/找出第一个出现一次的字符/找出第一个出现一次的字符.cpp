//��һ���ַ����ҳ���һ��ֻ����һ�ε��ַ�λ��
#include<iostream>
#include<string>

using namespace std;

int main(){
	string str = "abcdabc";
	//o(n) �ռ任ʱ��
	int a[300];
	memset(a, 0, sizeof(a));
	//��һ�α��� ͳ�Ƹ��ַ����ִ���
	for (int i = 0; i<str.length(); i++){
		a[str[i]]++;
	}
	//�ڶ��α��� ������������ϣӳ��
	int pos = -1;
	for (int i = 0; i<str.length(); i++){
		if (a[str[i]] == 1){
			pos = i;
			break;
		}
	}
	cout << pos << endl;
	return 0;
}



#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		int a[128] = { 0 };//������ִ���
		bool flag = false;//�ж��Ƿ��ҵ�
		for (int i = 0; i<str.size(); ++i)
			++a[str[i]];
		for (int i = 0; i<str.size(); ++i)
		if (a[str[i]] == 1){//�ж��Ƿ��ǵ�һ��ֻ����һ�ε��ַ�
			cout << str[i] << endl;
			flag = true;
			break;//ע��Ҫbreak;
		}
		if (flag == false)//���û���ҵ�
			cout << "-1" << endl;
	}
	return 0;
}
