#define _CRT_SECURE_NO_WARNINGS 1

//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。

#include<iostream>
#include<vector>

using namespace std;

//二分查找
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
			return left;///情况1：在开头插入
		return left + 1;//情况2：在结尾插入
	}
};
