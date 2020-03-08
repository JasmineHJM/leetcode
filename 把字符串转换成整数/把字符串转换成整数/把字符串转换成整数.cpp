#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		int n = str.size(), s = 1;
		long long res = 0;
		if (!n) 
			return 0;
		if (str[0] == '-') s = -1;
		for (int i = (str[0] == '-' || str[0] == '+') ? 1 : 0; i < n; ++i){
			if (!('0' <= str[i] && str[i] <= '9')) 
				return 0;
			res = (res << 1) + (res << 3) + (str[i] & 0xf);//res=res*10+str[i]-'0';
		}
		return res * s;
	}
};
/*
class Solution {
public:
	int StrToInt(string str) {
		int result = 0;
		char flag = 1;
		for (unsigned int i = 0; i < str.length(); ++i) {
			// ÅÐ¶Ï·ûºÅ
			if (i == 0) {
				if (str.at(0) == '+')
					continue;
				else if (str.at(0) == '-') {
					flag = -1;
					continue;
				}
			}
			int tmp = str.at(i);
			int num = tmp - '0';
			if (num<0 || num>9){
				result = 0;
				break;
			}
			result = result * 10 + num;
		}
		return result*flag;
	}
};
*/