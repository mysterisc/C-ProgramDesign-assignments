#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
���������һ���ַ���(�޿ո��Ʊ����)��
���ַ����е�Сд��ĸת��Ϊ��д��ĸ�����ת������ַ���������������س���
�����20����Ч�ַ����������س�����
�������룺apple �����APPLE
����ַ����а����������ַ�����������ת����ֻת��Сд��ĸΪ��д��ĸ��
�����룺test2test* �����TEST2TEST*
*/

int main() {
	char s[20];
	// scanf("%s", s);
	gets(s);
	int len =  strlen(s);
	for(int i = 0; i < len; i++) {
		if('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 32;
		}
		printf("%c", s[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

