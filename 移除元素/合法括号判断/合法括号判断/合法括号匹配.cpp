//对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。
//给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。

#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		if (n % 2 == 1)//先排除奇数情况
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
//可以利用栈把左括号保存，每次遇见右括号就出栈一个，
//此时如果栈空就为false, 遍历期间遇见不是括号也为false，直到遍历结束且栈为空就返回true

