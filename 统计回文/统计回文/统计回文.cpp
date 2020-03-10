//输出一个数字，表示把字符串B插入字符串A之后构成一个回文串的方法数

#include<iostream>
#include<string>

using namespace std;

//判断回文
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
			str1.insert(i, str2);   //在A字符串中以此插入B字符串
			if (Huiwen(str1))       //判断是否是回文
				count = count + 1;    //统计回文    
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