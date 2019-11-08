#define _CRT_SECURE_NO_WARNINGS 1

//计算字符串最后一个单词的长度，单词以空格隔开。 

#include<iostream>
#include<string>

using namespace std;
int main()
{    
	string str;    
	getline(cin,str);    
	int count=0;    
	int len=str.length();    
	for(int i=(len-1);i>=0;i--)    
	{        
		if(str[i]!=' ')        
		{            
			count++;       
		}        
		else        
		{           
			break;
		}    
	}    
	cout<<count<<endl;
	return 0;
}
