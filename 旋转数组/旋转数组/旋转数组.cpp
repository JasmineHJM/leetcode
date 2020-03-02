#include<iostream>
#include<vector>

using namespace std;

//1.���η�ת (A'B')' = BA,�� Ϊת��,��Ӧ��Ҫ�������η�ת

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		//reverse��ת����[begin,end)����
		reverse(nums.begin(), nums.end() - k%len);           //��תA���� 
		reverse(nums.end() - k%len, nums.end());               //��תB���� 
		reverse(nums.begin(), nums.end());                    //���巭ת
	}
};

//2.�򵥷���������һ���µ������ԭ������и�ֵ(ʹ���˶���Ŀռ䣬����Ҫ��)

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> nums2(nums);
		int len = nums.size();

		for (int i = 0; i<len; i++)
		{
			nums[(i + k) % len] = nums2[i];
		}

	}
}; 


//3.��������������k����ת(����ʱ������)


class Solution{
public:
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		for (int i = 1; i<k + 1; i++)//��תk��
		{
			int tmp;
			tmp = nums[len - 1];
			for (int j = len - 1; j >= 1; j--)//ÿ������ƶ�һλ���ӵ����ڶ�λ����ʼ
			{
				nums[j] = nums[j - 1];
			}
			nums[0] = tmp;

		}

	}
};

