#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
��д��������һ���ַ�����s1��Ȼ���ַ�����s1�е�ȫ���ַ����Ƶ��ַ��ַ�����s2��������strcpy��
��ֵʱ��'\0'ҲҪ���ƹ�ȥ������ʾ��ת���ַ������
�������룺hello
�����hello\0
*/

int main() {
	char s1[50], s2[50];
	int i = 0;
	scanf("%s", s1);
	while(s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}
	s2[i++] = '\\';
	s2[i++] = '0';
	s2[i] = '\0';
	printf("%s", s2);
	system("pause");
	return 0;
}

