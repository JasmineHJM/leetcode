#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int i = 0;
		for (int j = 1; j<nums.size(); j++){
			if (nums[i] != nums[j]){
				++i;
				//i++;
				nums[i] = nums[j];
			}
		}

		return i + 1;


	}
};

