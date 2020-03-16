//输入描述:输入一行字符串，可以有空格
//输出描述 :输出参数个数，分解后的参数，每个参数都独占一行

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void cmdExplain(const string & str){
	string temp = "";
	vector<string> svec;
	int size = str.size();
	int flag = 0;
	for (int i = 0; i< size; i++){
		if ('"' == str[i]){
			flag = ~flag;  // flag 为0 则变为1表示现在第一次出现了“ ，为1，则变为0表示“抵消了
		}
		else if (' ' == str[i] && 0 == flag){
			svec.push_back(temp);
			temp = "";
		}
		else
			temp += str[i];
	}
	svec.push_back(temp);  // 别忘记最后一个temp
	int t = svec.size();
	cout << t << endl;
	for (int i = 0; i < t; i++)
		cout << svec[i] << endl;
}

int main(){
	string str;
	while (getline(cin, str)){
		cmdExplain(str);
	}
}

//方法二
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<string> mystr;
	string tmp;

	while (cin >> tmp){
		mystr.push_back(tmp);
	}

	string each;
	string eve;
	cout << mystr.size() << endl;
	for (int i = 0; i<mystr.size(); i++){
		each = mystr[i];
		int a = each.size();
		if (each[0] == '\"')
			eve = each.substr(1, a - 2);
		else if (each[a - 1] == '\"'){
			eve = eve + ' ' + each.substr(0, a - 2);
			cout << eve << endl;
			eve.clear();
		}
		else
			cout << each << endl;
	}
	return 0;

}

//方法三
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		vector<string> vec;//存储解析后的参数
		int flag = 0;
		int cntOfQuot = 0;//引号计数
		int lastIndexOfSpace = -1;//上一个空格的位置
		s += ' ';//预处理使得最后一个参数也能被push进vec中；
		for (unsigned i = 0; i<s.size(); i++)//注意vec中的元素包括参数前面的引号
		{
			if (s[i] == ' '&&!flag)//flag=0说明i之前的位置没有双引号或者是配对的
			{
				vec.push_back(s.substr(lastIndexOfSpace + 1, i - lastIndexOfSpace - 1));//两个空格之间的参数，包括引号
				lastIndexOfSpace = i;
			}
			if (s[i] == '"')
			{
				if (cntOfQuot % 2 == 0)  flag = 1;
				else    flag = 0;
				cntOfQuot++;
			}
		}
		cout << vec.size() << endl;
		for (unsigned i = 0; i<vec.size(); i++)//注意vec中的元素包括参数前面的引号
		{
			if (vec[i][0] == '"')   vec[i] = vec[i].substr(1, vec[i].size() - 2);//去掉引号
			cout << vec[i] << endl;
		}
	}
}
