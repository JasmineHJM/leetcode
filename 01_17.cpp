#define _CRT_SECURE_NO_WARNINGS 1

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�

#include<iostream>
#include<vector>

using namespace std;

//���ֲ���
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1, mid = 0;
		while (left<right){
			mid = left + (right - left) / 2;
			if (nums[mid] == target)  
				return mid;
			else if (nums[mid]<target) left = mid + 1;
			else right = mid - 1;
		}
		if (target <= nums[left])
			return left;///���1���ڿ�ͷ����
		return left + 1;//���2���ڽ�β����
	}
};
