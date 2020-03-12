//对于一个给定的井字棋棋盘，请设计一个高效算法判断当前玩家是否获胜。
//给定一个二维数组board，代表当前棋盘。
//其中元素为1的代表是当前玩家的棋子，为0表示没有棋子，为-1代表是对方玩家的棋子。


#include<iostream>
#include<vector>
using namespace std;

//方法一：3竖3横两条斜线
bool checkWon(vector<vector<int> > a) {
	if (a[0][0] + a[1][1] + a[2][2] == 3) return true;
	if (a[0][2] + a[1][1] + a[2][0] == 3) return true;
	for (int i = 0; i<3; i++){
		if (a[i][0] + a[i][1] + a[i][2] == 3) return true;
		if (a[0][i] + a[1][i] + a[2][i] == 3) return true;
	}
	return false;
}

bool checkWon(vector<vector<int>> board) {
	for (int i = 0; i < 3; ++i){
		if (board[i][0] + board[i][1] + board[i][2] == 3 ||
			board[0][i] + board[1][i] + board[2][i] == 3){//3行3列
			return true;
		}
	}
	if (board[0][0] + board[1][1] + board[2][2] == 3 ||
		board[0][2] + board[1][1] + board[2][0] == 3){//对角线
		return true;
	}
	return false;
}

//方法二：扩展到N阶的棋盘同样适用;
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int len = board.size();
		//检查行
		for (int i = 0; i<len; i++)
		{
			int sum = 0;
			for (int j = 0; j<len; j++)
				sum += board[i][j];
			if (sum == len)
				return true;
		}
		//检查列
		for (int i = 0; i<len; i++)
		{
			int sum = 0;
			for (int j = 0; j<len; j++)
				sum += board[j][i];
			if (sum == len)
				return true;
		}
		//检查主对角线
		int temp = 0;
		for (int i = 0; i<len; i++)
		{
			temp += board[i][i];
		}
		if (temp == len) return true;

		//检查副对角线
		temp = 0;
		for (int i = 0; i<len; i++)
		{
			temp += board[i][len - i - 1];
		}
		if (temp == len) return true;

		return false;
	}
};
