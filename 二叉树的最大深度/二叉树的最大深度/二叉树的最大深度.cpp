//给定一个二叉树，找出其最大深度。
//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
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
	 int maxDepth(TreeNode* root) {
		 if (root == NULL){
			 return 0;
		 }
		 else{
			 int depthl = maxDepth(root->left);
			 int depthr = maxDepth(root->right);
			 if (depthl>depthr)
				 return depthl + 1;
			 else
				 return depthr + 1;
		 }
	 }
 };
