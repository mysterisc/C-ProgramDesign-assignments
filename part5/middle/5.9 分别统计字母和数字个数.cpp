#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
��д��������һ���ַ������ֱ�ͳ��������ַ����е���ĸ���������ָ�����

���������ʽҪ��
	�����ʽ��string�س�
���磺
���룺the day the month the year 123�س�
�����letters:21,digits:3
���룺aaabacad�س�
�����letters:8,digits:0
*/

int main()
{
	char s[50] = {0};
	char *p = s;
	gets(p);
	int len = strlen(p), num = 0, str = 0;
	for(int i = 0; i < len; i++) {
		if(*(p + i) >= '0' && *(p + i) <= '9') {
			num++;
		}
		if((*(p + i) >= 'a' && *(p + i) <= 'z') || (*(p + i) >= 'A' && *(p + i) <= 'Z')) {
			str++;
		}
	}
	printf("letters:%d,digits:%d", str, num);
	system("pause");
}
