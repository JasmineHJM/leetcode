#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

//大小和nums一样

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> newvec(nums.size(), 0);
		for (int i = 0; i<nums.size(); i++) newvec[(i + k) % nums.size()] = nums[i];
		for (int i = 0; i<nums.size(); i++) nums[i] = newvec[i];
	}
};

//大小为k
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
