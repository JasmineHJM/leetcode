#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����

//��С��numsһ��

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> newvec(nums.size(), 0);
		for (int i = 0; i<nums.size(); i++) newvec[(i + k) % nums.size()] = nums[i];
		for (int i = 0; i<nums.size(); i++) nums[i] = newvec[i];
	}
};

//��СΪk
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> tmp;
		k %= nums.size();
		for (vector<int>::iterator it = nums.begin() + nums.size() - k; it != nums.end();){
			tmp.emplace_back(*it);
			it = nums.erase(it);
		}
		vector<int>::iterator it = nums.begin();
		for (int j = tmp.size() - 1; j >= 0; j--) it = nums.insert(it, tmp[j]);
	}
};
