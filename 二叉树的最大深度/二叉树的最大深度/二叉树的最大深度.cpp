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

/*
 class Solution {
 public:
	 int max = 0;
	 int maxDepth(TreeNode* root) {

		 findMax(root, 0);
		 return max;
	 }
	 void findMax(TreeNode* root, int n){
		 if (root == nullptr) {
			 if (n > max) max = n;
			 return;
		 }
		 findMax(root->left, n + 1);
		 findMax(root->right, n + 1);

		 return;
	 }
 };*/

 /*
 class Solution {
 public:
	 int maxDepth(TreeNode* root) {
		 if (root == nullptr) {
			 return 0;
		 }
		 int left = maxDepth(root->left);
		 int right = maxDepth(root->right);
		 return left >= right ? (left + 1) : (right + 1);
	 }
 };*/
