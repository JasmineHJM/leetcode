//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
//找出那个只出现了一次的元素。
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		//采用异或操作
		int val = nums[0];
		for (int i = 1; i < nums.size(); i++){
			val = val^nums[i];
		}
		return val;
	}

	int singleNumber2(vector<int>& nums) {
		map<int, int> m;
		for (int i = 0; i < nums.size(); i++){
			if (m.find(nums[i]) != m.end()){
				m.erase(m.find(nums[i]));
			}
			else{
				m[nums[i]] = 1;
			}
		}
		return m.begin()->first;
	}

	int singleNumber3(vector<int>& nums) {
		map<int, int> m;
		for (int i = 0; i<nums.size(); i++)
		{
			m[nums[i]]++;
		}
		for (int i = 0; i<nums.size(); i++)
		{
			if (m[nums[i]] == 1)
			{
				return nums[i];
			}
		}
		return 0;
	}
};
