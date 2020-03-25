//计算两个字符串的最大公共字串的长度，字符不区分大小写

#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1, str2;
	int dis = 0, t = 0;
	string tmp;
	while (cin >> str1 >> str2){
		int len = str1.length();
		for (int i = len; i>1; i--){
			for (int j = 0; j<len; j++){
				if (i + j <= len){
					tmp = str1.substr(j, i);
					t = str2.find(tmp);
					if (t != -1 && tmp.length()>dis)
						dis = tmp.length();
				}
			}
		}
		cout << dis << endl;
	}
	return 0;
}


//思路:动态规划经典问题，dp[i][j]=dp[i-1][j-1]+1 //if s1[i-1]==s2[j-1] else dp[i][j]=0;
#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		int m = s1.length();
		int n = s2.length();
		int maxLen = 0;//保存最大长度
		vector<vector<int> >dp(m + 1, vector<int>(n + 1, 0));
		for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= n; ++j)
		if (s1[i - 1] == s2[j - 1]){
			dp[i][j] = dp[i - 1][j - 1] + 1;
			maxLen = max(maxLen, dp[i][j]);
		}
		cout << maxLen << endl;

	}
	return 0;
}
