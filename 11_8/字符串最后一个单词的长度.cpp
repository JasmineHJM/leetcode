#define _CRT_SECURE_NO_WARNINGS 1

//�����ַ������һ�����ʵĳ��ȣ������Կո������ 

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
