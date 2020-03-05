//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字

#include<iostream>
using namespace std;

int find(int array[], int len)
{
	if (array == NULL)
		return -1;

	int count = 0;
	int res;
	for (int i = 0; i<len; i++)
	{
		if (count == 0)
		{
			res = array[i];
			count = 1;
		}

		else if (array[i] == res)
			count++;
		else
			count--;
	}
	return res;
}

int main()
{
	int arr[9] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	int result = find(arr, 5);
	cout << result << endl;

	return 0;
}
