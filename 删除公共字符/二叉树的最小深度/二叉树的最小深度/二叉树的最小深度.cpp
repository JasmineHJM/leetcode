//����һ�����������ҳ�����С��ȡ�
//��С����ǴӸ��ڵ㵽���Ҷ�ӽڵ�����·���ϵĽڵ�������

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
		//1.������Ӻ��Һ�����Ϊ�յ������ֱ�ӷ���left+right+1
		//2.�������Ϊ�գ����ؽ�С���+1
		if (root->left == nullptr || root->right == nullptr)
			return left == 0 ? right + 1 : left + 1;
		else
			return left <= right ? (left + 1) : (right + 1);
	}
};
