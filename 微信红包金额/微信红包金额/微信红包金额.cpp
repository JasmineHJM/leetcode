//�����ڼ�С��ʹ��΢���յ��ܶ��������ǳ����ġ�
//�ڲ鿴��ȡ�����¼ʱ���֣�ĳ����������ֵĴ��������˺��������һ�롣
//���С���ҵ��ú����д�������㷨˼·�ʹ���ʵ�֣�Ҫ���㷨�����ܸ�Ч��
//����һ������Ľ������gifts�����Ĵ�Сn���뷵���������Ľ�
//��û�н���������һ�룬����0��

#include<iostream>
#include<vector>
using namespace std;

class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		if (gifts.size()<n || gifts.size() == 0)
			return 0;
		int count = 0, temp;
		for (int i = 0; i<n; i++){
			if (count == 0){
				temp = gifts[i];
				count = 1;
			}
			else{
				if (temp == gifts[i])
					count++;
				else
					count--;
			}
		}        
		int size = 0;      
		for (int i = 0; i<n; i++)       
		if (temp == gifts[i])            
			size++;           
		return (size>n / 2) ? temp : 0;
	}
};



class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		sort(gifts.begin(), gifts.end());
		int ret = gifts[(n / 2) - 1];
		int count = 0;
		for (int i = 0; i < n; i++){
			if (gifts[i] == ret){
				count++;
			}
		}
		if (count>(n / 2)){
			return ret;
		}
		else{
			return 0;
		}
	}
};