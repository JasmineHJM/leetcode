//查找两个字符串a, b中的最长公共子串。若有多个，输出在较短串中最先出现的那个。
//输入描述 :输入两个字符串
//输出描述 :返回重复出现的字符

#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b;
	while (cin >> a >> b){
		if (a.size() > b.size())
			swap(a, b);
		string str_m;//存储最长公共子串
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


//方法二
#include <iostream>
#include <string>
using namespace std;
//str1 < str2
string FindPublicStr(string str1, string str2){
	int len1 = str1.length(), len2 = str2.length();
	//从大到小遍历子串长度
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
