//���������ַ���a, b�е�������Ӵ������ж��������ڽ϶̴������ȳ��ֵ��Ǹ���
//�������� :���������ַ���
//������� :�����ظ����ֵ��ַ�

#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b;
	while (cin >> a >> b){
		if (a.size() > b.size())
			swap(a, b);
		string str_m;//�洢������Ӵ�
		for (int i = 0; i < a.size(); i++){
			for (int j = i; j < a.size(); j++){
				string temp = a.substr(i, j - i + 1);
				if (int(b.find(temp))<0)
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}
		cout << str_m << endl;
	}
	return 0;
}


//������
#include <iostream>
#include <string>
using namespace std;
//str1 < str2
string FindPublicStr(string str1, string str2){
	int len1 = str1.length(), len2 = str2.length();
	//�Ӵ�С�����Ӵ�����
	for (int l = len1; l>0; --l){
		for (int i = 0; i<len1 - l + 1; ++i){
			int pos = str2.find(str1.substr(i, l));
			if (pos != -1)
				return str1.substr(i, l);
		}
	}
}
int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		if (str1.length() < str2.length())
			cout << FindPublicStr(str1, str2) << endl;
		else
			cout << FindPublicStr(str2, str1) << endl;
	}
}
