//给一个字符串找出第一个只出现一次的字符位置
#include<iostream>
#include<string>

using namespace std;

int main(){
	string str = "abcdabc";
	//o(n) 空间换时间
	int a[300];
	memset(a, 0, sizeof(a));
	//第一次遍历 统计各字符出现次数
	for (int i = 0; i<str.length(); i++){
		a[str[i]]++;
	}
	//第二次遍历 辅助数组做哈希映射
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
		int a[128] = { 0 };//保存出现次数
		bool flag = false;//判断是否找到
		for (int i = 0; i<str.size(); ++i)
			++a[str[i]];
		for (int i = 0; i<str.size(); ++i)
		if (a[str[i]] == 1){//判断是否是第一个只出现一次的字符
			cout << str[i] << endl;
			flag = true;
			break;//注意要break;
		}
		if (flag == false)//如果没有找到
			cout << "-1" << endl;
	}
	return 0;
}
