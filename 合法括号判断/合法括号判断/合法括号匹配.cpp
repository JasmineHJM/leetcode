//����һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ���
//����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���

#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		if (n % 2 == 1)//���ų��������
			return false;
		stack<char> s1;
		for (int i = 0; i<A.size(); i++){
			if (A[i] == '(')
				s1.push(A[i]);
			else if (A[i] == ')'){
				if (s1.empty())
					return false;
				s1.top();
			}
			else
				return false;
		}
		if (s1.empty())
			return true;
	}
};
//��������ջ�������ű��棬ÿ�����������žͳ�ջһ����
//��ʱ���ջ�վ�Ϊfalse, �����ڼ�������������ҲΪfalse��ֱ������������ջΪ�վͷ���true

