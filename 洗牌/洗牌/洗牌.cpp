//�������� :��һ��һ����T(T �� 100)����ʾ����������
//	����ÿ�����ݣ���һ��������n, k(1 �� n, k �� 100)��
//	������һ����2n����a1, a2, ..., a2n(1 �� ai �� 1000000000)��
//	��ʾԭʼ������ϵ��µ����С�
//������� :����ÿ�����ݣ����һ�У����յ����С�
//	  ����֮���ÿո��������Ҫ����ĩ�������Ŀո�

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int T, n, k;
	cin >> T;
	while (T--){
		cin >> n >> k;
		int num = 2 * n;
		vector<int> table(num);
		for (int i = 0; i < num; ++i)
			cin >> table[i];
		while (k--){
			vector<int> n1(table.begin(), table.end());
			for (int i = 0; i < n; ++i){
				table[2 * i] = n1[i];
				table[2 * i + 1] = n1[i + n];
			}
		}
		for (int i = 0; i < num - 1; ++i)
			cout << table[i] << " ";
		cout << table[num - 1] << endl;
	}
	return 0;
}

//������
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int maxn = 100 + 5;
int a[2 * maxn], T, n, k, ind[2 * maxn], tmp[2 * maxn];

void shuffle(){
	int k = 1;
	for (int i = 1; i <= n; i++){ tmp[k] = ind[i]; k += 2; }
	k = 2;
	for (int i = n + 1; i <= 2 * n; i++){ tmp[k] = ind[i]; k += 2; }
	memcpy(ind, tmp, sizeof(tmp));
}
int main(){
	scanf("%d", &T);
	while (T--){
		scanf("%d%d", &n, &k);
		for (int i = 1; i <= n * 2; i++) { scanf("%d", &a[i]); ind[i] = i; }
		while (k--) { shuffle(); }
		for (int i = 1; i < n * 2; i++) printf("%d ", a[ind[i]]);
		printf("%d\n", a[ind[2 * n]]);
	}
}
