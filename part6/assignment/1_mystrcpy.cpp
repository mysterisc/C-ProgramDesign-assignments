#include<stdio.h>
#include<stdlib.h>

/*
ʵ���ַ����Ŀ�����

void my_strcpy(char * destination,char * source);
��sourceָ����ַ���������destinationָ���λ�á�

ע�⣺ʹ�ÿո��ַ�����ʾ�ַ����Ľ�����
����sourceָ��λ�ã����α������ַ�'a'���ַ�'b'���ַ��ո�' '���ַ�'c'����sourceָ����ַ���Ϊ"ab"��


�����쳣��������"error"������Ҫ�������������Ϊ����
*/


void my_strcpy(char *destination, char *source) {
	if(destination == NULL || source == NULL) {
		printf("error");
		return ;
	}
	int i = 0;
	while((*(source + i) != ' ') && (*(source + i) != '\0')) {
		*(destination + i) = *(source + i);
		i++;
	}
	*(destination + i) = ' ';
}

