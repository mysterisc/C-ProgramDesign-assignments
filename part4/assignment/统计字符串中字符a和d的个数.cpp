#include<stdio.h>
#include<stdlib.h>

/*
��д��������һ���ַ������ֱ�ͳ��������ַ����е���ĸa��d�ĸ�����

���������ʽҪ��
	�����ʽ��string�س�
���磺
���룺thedaythemonththeyear123�س�
�����a:2,d:1
���룺a
�����a:1,d:0
*/

int main() {
	char s[100];
	int i = 0, numa = 0, numd = 0;
	scanf("%s", s);
	while(s[i] != '\0') {
		if(s[i] == 'a') numa++;
		if(s[i] == 'd') numd++;
		i++;
	}
	printf("a:%d,d:%d", numa, numd);
	system("pause");
	return 0;
}

