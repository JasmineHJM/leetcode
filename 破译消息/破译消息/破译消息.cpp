//NowCoder�����ڳ���Σ�պ���ı�������Ϊ�����棬���״η��������룬���ھ��ӵ���Ϣ���ݡ�
//�������Ǿ����е�һ�����٣���Ҫ�ѷ���������Ϣ������������ṩ����Ľ�����
//��Ϣ���ܵİ취�ǣ�����Ϣԭ���е�ÿ����ĸ���ֱ��ø���ĸ֮��ĵ�5����ĸ�滻
//�����磺��Ϣԭ���е�ÿ����ĸA ���ֱ��滻����ĸF���������ַ����䣬������Ϣԭ�ĵ�������ĸ���Ǵ�д�ġ�
//�����е���ĸ��ԭ���е���ĸ��Ӧ��ϵ���¡�
//������ĸ��A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//ԭ����ĸ��V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
//
//�������� :��������������ݣ�ÿ������һ�У�Ϊ�յ������ġ����Ľ��пո�ʹ�д��ĸ��ɡ�
//  ������� :��Ӧÿһ�����ݣ�������ܺ�����ġ�


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char password[26] = { 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 
                      'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U' };

int main(){
	char str[1000];
	while (gets(str)){
		int i = 0;
		while (str[i] != '\0'){
			if (str[i] != ' ')
				printf("%c", password[(int)(str[i] - 'A')]);
			else
				printf(" ");
			i++;
		}
		printf("\n");
	}

	return 0;
}


#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	while (getline(cin, s)){
		for (int i = 0; i < s.size(); i++){
			if (s[i] <= 'E' && s[i] >= 'A')
				s[i] += 21;
			else if (s[i] >= 'F' && s[i] <= 'Z')
				s[i] -= 5;
			else
				continue;
		}
		cout << s << endl;
	}
	return 0;
}

