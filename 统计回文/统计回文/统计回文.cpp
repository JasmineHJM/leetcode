//���һ�����֣���ʾ���ַ���B�����ַ���A֮�󹹳�һ�����Ĵ��ķ�����

#include<iostream>
#include<string>

using namespace std;

//�жϻ���
bool Huiwen(string str1){
	int length = str1.length();
	for (int i = 0; i<length; i++){
		if (str1[i] != str1[length - 1])
			return false;
		length = length - 1;
	}
	return true;
}
int main(){
	string str1, str2, temp;
	int count, len;
	while (cin >> str1 >> str2){
		count = 0;
		temp = str1;
		len = str1.length() + 1;
		for (int i = 0; i<len; i++){
			str1 = temp;
			str1.insert(i, str2);   //��A�ַ������Դ˲���B�ַ���
			if (Huiwen(str1))       //�ж��Ƿ��ǻ���
				count = count + 1;    //ͳ�ƻ���    
		}
		cout << count << endl;
	}
	return 0;
}

/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0;
	string A, B;
	cin >> A >> B;
	for (int i = 0; i <= A.length(); i++)
	{
		string a = A;
		a.insert(i, B);
		string b = a;
		reverse(a.begin(), a.end());
		if (a == b)
			n++;
	}
	cout << n << endl;
}
*/