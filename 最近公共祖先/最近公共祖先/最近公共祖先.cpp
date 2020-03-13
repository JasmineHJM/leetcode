//有一棵无穷大的满二叉树，其结点按根结点一层一层地从左往右依次编号，根结点编号为1。
//现在有两个结点a，b。请设计一个算法，求出a和b点的最近公共祖先的编号。
//给定两个int a, b。为给定结点的编号。请返回a和b的最近公共祖先的编号。注意这里结点本身也可认为是其祖先。

#include<iostream>
#include<vector>
using namespace std;

// 思路：满二叉树的子节点与父节点之间的关系为root = child / 2
//利用这个关系，如果a ！= b，就让其中的较大数除以2， 如此循环知道a == b，
//即是原来两个数的最近公共祖先
class LCA{
public:
	int getLCA(int a, int b){
		while (a != b){
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		return a;
	}
};


//树的数组表示找到父亲节点是一件很容易的事情 parent = child / 2
class LCA{
public:
	int getLCA(int a, int b){
		vector<int> patha;
		vector<int> pathb;
		patha.push_back(a);
		pathb.push_back(b);
		//找到从根节点到 a 节点所经过的路径 
		while (a >= 1){
			patha.push_back(a / 2);
			a = a / 2;
		}
		//找到从根节点到 b 节点所经过的路径
		while (b >= 1){
			pathb.push_back(b / 2);
			b = b / 2;
		}
		int i = patha.size() - 1;
		int j = pathb.size() - 1;
		//两个数组中从数组的后面 找到 第一次出现相同的数据 比如 [1,3,5,7][1,3，5,7,8] 7
		while (i >= 0 && j >= 0){
			if (patha[i] == pathb[j]){
				i--;
				j--;
			}
			else{
				return patha[++i];
			}
		}
		return 1;
	}
};
