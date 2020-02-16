#include<stdio.h>

//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

//方法一
int removeElement(int* nums, int numsSize, int val){
	int i = 0, j = numsSize - 1, tmp;
	while (i<j){
		while (i<j&&nums[i] != val)
			i++;
		while (i<j&&nums[j] == val)
			j--;
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
		i++;
		j--;
	}
	for (i = numsSize - 1; i >= 0; i--)
	{
		if (nums[i] != val)
			break;
		numsSize--;
	}
	return numsSize;
}

//方法二
int removeElement2(int* nums, int numsSize, int val){
	int k = 0;
	for (int i = 0; i<numsSize; i++){
		if (nums[i] != val){
			nums[k] = nums[i];
			k++;
		}
	}
	return k;
}
