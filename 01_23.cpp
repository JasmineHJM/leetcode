#define _CRT_SECURE_NO_WARNINGS 1

//�������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ���������顣

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//����һ �ϲ�������
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = m, j = 0; i < m + n; i++, j++) nums1[i] = nums2[j];
		sort(nums1.begin(), nums1.end());
	}
};

//������ ˫ָ��1 ��ǰ����
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int p = 0, i = 0, j = 0;
		vector<int> tmp(nums1.begin(), nums1.begin() + m);
		while (i < m&&j < n) nums1[p++] = (tmp[i] < nums2[j]) ? tmp[i++] : nums2[j++];
		while (j < n) nums1[p++] = nums2[j++];
		while (i < m) nums1[p++] = tmp[i++];
	}
};


//������ ˫ָ��2 �Ӻ�ǰ

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int p1 = m - 1, p2 = n - 1, p = m + n - 1;
		while (p1 >= 0 && p2 >= 0){
			nums1[p--] = nums1[p1]>nums2[p2] ? nums1[p1--] : nums2[p2--];
		}
		if (p1<0){
			while (p2 >= 0)
				nums1[p--] = nums2[p2--];
		}
	}
};
