//给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。

//说明:
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
//你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int m_ = m - 1;
		int n_ = n - 1;
		int len = m + n - 1;
		while (m_ >= 0 && n_ >= 0) nums1[len--] = nums1[m_] > nums2[n_] ? nums1[m_--] : nums2[n_--];
		while (n_ >= 0) nums1[len--] = nums2[n_--]; //最后 nums2有残留就一定是在最前面的
	}
};
