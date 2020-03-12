//����һ�������ľ��������̣������һ����Ч�㷨�жϵ�ǰ����Ƿ��ʤ��
//����һ����ά����board������ǰ���̡�
//����Ԫ��Ϊ1�Ĵ����ǵ�ǰ��ҵ����ӣ�Ϊ0��ʾû�����ӣ�Ϊ-1�����ǶԷ���ҵ����ӡ�


#include<iostream>
#include<vector>
using namespace std;

//����һ��3��3������б��
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
			board[0][i] + board[1][i] + board[2][i] == 3){//3��3��
			return true;
		}
	}
	if (board[0][0] + board[1][1] + board[2][2] == 3 ||
		board[0][2] + board[1][1] + board[2][0] == 3){//�Խ���
		return true;
	}
	return false;
}

//����������չ��N�׵�����ͬ������;
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int len = board.size();
		//�����
		for (int i = 0; i<len; i++)
		{
			int sum = 0;
			for (int j = 0; j<len; j++)
				sum += board[i][j];
			if (sum == len)
				return true;
		}
		//�����
		for (int i = 0; i<len; i++)
		{
			int sum = 0;
			for (int j = 0; j<len; j++)
				sum += board[j][i];
			if (sum == len)
				return true;
		}
		//������Խ���
		int temp = 0;
		for (int i = 0; i<len; i++)
		{
			temp += board[i][i];
		}
		if (temp == len) return true;

		//��鸱�Խ���
		temp = 0;
		for (int i = 0; i<len; i++)
		{
			temp += board[i][len - i - 1];
		}
		if (temp == len) return true;

		return false;
	}
};
