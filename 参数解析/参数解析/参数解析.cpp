//��������:����һ���ַ����������пո�
//������� :��������������ֽ��Ĳ�����ÿ����������ռһ��

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
			flag = ~flag;  // flag Ϊ0 ���Ϊ1��ʾ���ڵ�һ�γ����ˡ� ��Ϊ1�����Ϊ0��ʾ��������
		}
		else if (' ' == str[i] && 0 == flag){
			svec.push_back(temp);
			temp = "";
		}
		else
			temp += str[i];
	}
	svec.push_back(temp);  // ���������һ��temp
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

//������
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

//������
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		vector<string> vec;//�洢������Ĳ���
		int flag = 0;
		int cntOfQuot = 0;//���ż���
		int lastIndexOfSpace = -1;//��һ���ո��λ��
		s += ' ';//Ԥ����ʹ�����һ������Ҳ�ܱ�push��vec�У�
		for (unsigned i = 0; i<s.size(); i++)//ע��vec�е�Ԫ�ذ�������ǰ�������
		{
			if (s[i] == ' '&&!flag)//flag=0˵��i֮ǰ��λ��û��˫���Ż�������Ե�
			{
				vec.push_back(s.substr(lastIndexOfSpace + 1, i - lastIndexOfSpace - 1));//�����ո�֮��Ĳ�������������
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
		for (unsigned i = 0; i<vec.size(); i++)//ע��vec�е�Ԫ�ذ�������ǰ�������
		{
			if (vec[i][0] == '"')   vec[i] = vec[i].substr(1, vec[i].size() - 2);//ȥ������
			cout << vec[i] << endl;
		}
	}
}
