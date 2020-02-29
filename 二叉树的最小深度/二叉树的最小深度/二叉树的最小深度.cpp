//给定一个二叉树，找出其最小深度。
//最小深度是从根节点到最近叶子节点的最短路径上的节点数量。

#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		int left = minDepth(root->left);
		int right = minDepth(root->right);
		//1.如果左孩子和右孩子有为空的情况，直接返回left+right+1
		//2.如果都不为空，返回较小深度+1
		if (root->left == nullptr || root->right == nullptr)
			return left == 0 ? right + 1 : left + 1;
		else
			return left <= right ? (left + 1) : (right + 1);
	}
};
