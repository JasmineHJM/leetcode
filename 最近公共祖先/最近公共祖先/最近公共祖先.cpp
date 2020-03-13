//��һ���������������������㰴�����һ��һ��ش����������α�ţ��������Ϊ1��
//�������������a��b�������һ���㷨�����a��b�������������ȵı�š�
//��������int a, b��Ϊ�������ı�š��뷵��a��b������������ȵı�š�ע�������㱾��Ҳ����Ϊ�������ȡ�

#include<iostream>
#include<vector>
using namespace std;

// ˼·�������������ӽڵ��븸�ڵ�֮��Ĺ�ϵΪroot = child / 2
//���������ϵ�����a ��= b���������еĽϴ�������2�� ���ѭ��֪��a == b��
//����ԭ���������������������
class LCA{
public:
	int getLCA(int a, int b){
		while (a != b){
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		return a;
	}
};


//���������ʾ�ҵ����׽ڵ���һ�������׵����� parent = child / 2
class LCA{
public:
	int getLCA(int a, int b){
		vector<int> patha;
		vector<int> pathb;
		patha.push_back(a);
		pathb.push_back(b);
		//�ҵ��Ӹ��ڵ㵽 a �ڵ���������·�� 
		while (a >= 1){
			patha.push_back(a / 2);
			a = a / 2;
		}
		//�ҵ��Ӹ��ڵ㵽 b �ڵ���������·��
		while (b >= 1){
			pathb.push_back(b / 2);
			b = b / 2;
		}
		int i = patha.size() - 1;
		int j = pathb.size() - 1;
		//���������д�����ĺ��� �ҵ� ��һ�γ�����ͬ������ ���� [1,3,5,7][1,3��5,7,8] 7
		while (i >= 0 && j >= 0){
			if (patha[i] == pathb[j]){
				i--;
				j--;
			}
			else{
				return patha[++i];
			}
		}
		return 1;
	}
};
