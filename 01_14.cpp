#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//实现函数 ToLowerCase() ，该函数接收一个字符串参数 str 
//并将该字符串中的大写字母转换成小写字母，之后返回新的字符串 。

//利用ASCII值大小写之间相差32的性质，遇到大写的字母，加上32就是相应的小写字母。
class Solution {
public:
	string toLowerCase(string str) {
		int len = str.size();
		for (int i = 0; i < len; ++i){
			if (str[i] <= 'Z' && str[i] >= 'A'){
				str[i] = str[i] + 32;
			}
		}
		return str;
	}
};
