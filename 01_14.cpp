#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//ʵ�ֺ��� ToLowerCase() ���ú�������һ���ַ������� str 
//�������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ��� ��

//����ASCIIֵ��Сд֮�����32�����ʣ�������д����ĸ������32������Ӧ��Сд��ĸ��
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
