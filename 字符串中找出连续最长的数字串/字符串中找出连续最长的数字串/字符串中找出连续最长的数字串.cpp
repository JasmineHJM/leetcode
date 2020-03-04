//读入一个字符串str，输出字符串str中的连续最长的数字串

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(){
	string ans = "", str;
	cin >> str;
	int i = 0, max_len = 0, strlen = str.length();
	while (i < strlen){
		if (str[i] < '0' || str[i] > '9') i++;
		else{
			int len = 0;
			string tmp = "";
			while (i < strlen  && str[i] <= '9' && str[i] >= '0'){
				tmp = tmp + str[i];
				i++; len++;
			}
			if (len > max_len) { max_len = len; ans = tmp; }//memcpy(&ans, &tmp, sizeof(tmp)); }
		}
	}
	cout << ans << endl;
	return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, res, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++){
		if (str[i] >= '0' && str[i] <= '9')cur += str[i];
		else{
			if (res.length() < cur.length())res = cur;
			cur = "";
		}
	}
	cout << res;
	return 0;
}
*/
