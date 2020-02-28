//����һ�����������ҳ��������ȡ�
//�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
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
