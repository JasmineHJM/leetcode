//����С����һ��W*H��������ӣ�������б��Ϊ0~H - 1��������б��Ϊ0~W - 1��
//ÿ������������Է�һ�鵰�⣬�������鵰���ŷ����þ��벻�ܵ���2��
//����������������(x1, y1), (x2, y2)��ŷ����þ���Ϊ :
//((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) ������ƽ����
//С����֪�������ԷŶ��ٿ鵰������������

//��������:ÿ������������񳤿�W, H���ÿո�ָ�.(1 �� W��H �� 1000)
//������� :���һ�������Էŵĵ�����


//������4������2�������ȼ���������ۼ��ɡ�����λ�þ��Ǽ��ÿ��2 * 2�������ε�����

#include<iostream>
using namespace std;

int main()
{
	int a[1000][1000] = { 0 };
	int w, h, res = 0;
	cin >> w >> h;
	for (int i = 0; i<w; i++)
	{
		for (int j = 0; j<h; j++)
		{
			if (a[i][j] == 0)
			{
				res++;
				if ((i + 2)<w) a[i + 2][j] = -1;
				if ((j + 2)<h) a[i][j + 2] = -1;
			}
		}
	}
	cout << res;

	return 0;
}

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int W, H, i, j, counts = 0;
	cin >> W >> H;
	if (W % 4 == 0 || H % 4 == 0)
		counts = W*H / 2;
	else if(W % 2 == 0 && H % 2 == 0)
		counts = (W*H / 4 + 1) * 2;
	else
		counts = W*H / 2 + 1;
	cout << counts << endl;
	return 0;
}
*/