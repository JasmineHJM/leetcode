//һ�黨������������Щͼ��������һ��ֱ�ӿ��õ�С����������Ҳ��һЩͼ����
//���ڸ����Ļ�������С����������һ���ܴӻ������о����ܼ�������С�������أ�
//
//�������� :��������������ݡ�ÿ�����ݰ��������ַ���s, t���ֱ��ǳɶԳ��ֵĻ�������С������
//	        �䲼�������ÿɼ�ASCII�ַ���ʾ�ģ��ɼ���ASCII�ַ��ж��ٸ��������Ļ���Ҳ�ж����ֻ�������������С�������ᳬ��1000���ַ�����
//������� :��Ӧÿ�����룬����ܴӻ��Ʋ��м��������С�������������һ�鶼û�У��Ǿ����0��ÿ�����ռһ�С�

#include<iostream>
#include<string>
using namespace std;

//�ַ���ƥ���㷨��ʱ�临�Ӷ�O��M*N��
int main(){
	string s, t;
	while (cin >> s >> t){
		int count = 0;
		for (int i = 0; i < s.size(); i++){
			int j = 0, k = i;
			while (s[k] == t[j] && k < s.size()){
				++k; 
				++j;
			}
			if (j == t.size()){
				count++;
				i = k - 1;
			}
		}
		cout << count << endl;
	}
}

//��C++ STL�ӿ��е�find����
int main(){
	string s, t;
	while (cin >> s >> t){
		int count = 0;
		while (s.find(t) != string::npos){
			count++;
			s.erase(s.find(t), t.size());
		}
		cout << count << endl;
	}
}