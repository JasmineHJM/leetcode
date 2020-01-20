#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//给定一个赎金信(ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由第二个字符串magazines里面的字符构成。
//如果可以构成，返回 true ；否则返回 false。
//(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)
class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int cnt[26] = { 0 };
		for (int i = 0; i < magazine.length(); i++)
			cnt[magazine[i] - 'a']++;
		for (int i = 0; i < ransomNote.length(); i++)
		if (--cnt[ransomNote[i] - 'a'] < 0) return false;
		return true;
	}
};
