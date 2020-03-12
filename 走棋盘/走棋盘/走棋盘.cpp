//�����n x m�����̸��ӣ�nΪ����ĸ�������mΪ����ĸ�������
//���Ÿ��Ա�Ե�ߴ����Ͻ��ߵ����½ǣ��ܹ��ж������߷���Ҫ�����߻�ͷ·
//����ֻ�����Һ������ߣ���������������ߡ�
#include <iostream>
using namespace std;

int func(int m, int n) {
	if (m == 0 || n == 0) {
		return 1;
	}
	return func(m, n - 1) + func(m - 1, n);
}
int main() {
	int m, n;
	while (cin >> m >> n) {
		cout << func(m, n) << endl;
	}

	return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				if (i == 0 && j == 0) {
					dp[i][j] = 1;
					continue;
				}
				if (i == 0) {    // �ϱ߽�
					dp[i][j] = dp[i][j - 1];
				}
				else if (j == 0) {    // ��߽�
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}
		cout << dp[n][m] << endl;
	}

	return 0;
}
*/

//����ת���ɣ������յ�Ҫ������m�Σ�������n�Σ�һ����m+n�Σ�
//��m+n��������m�������ߣ������������ߣ�  
//�������C�±�m+n�ϱ�m��
#include<iostream>��
using namespace std;
int main(){
	int m, n;
	while (cin >> m){
		cin >> n;
		int up = 1;
		int down = 1;
		for (int i = 0; i<n; i++){
			up *= (m + n) - i;
			down *= i + 1;
		}
		cout << up / down << endl;
	}
}
