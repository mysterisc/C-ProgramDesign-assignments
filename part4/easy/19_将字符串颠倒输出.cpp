#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
����һ���ַ���(�޿ո�)�����ַ����ߵ�������50���ַ���
��������apple�����elppa��
*/

int main() {
	char s[50];
	scanf("%s", s);
	int len =  strlen(s);
	for(int i = len - 1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	system("pause");
	return 0;
}

