#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
����һ���ַ���ͳ�����а������ٵ��ʣ�����֮���ÿո�ָ���

���������ʽҪ��
	�����ʽ��a b c d�س����ո��������λ�ã�������ͷ��β���ܻ��пո��������ֺ���ĸһ����Ҳ����Ϊ���ʣ�
	�����ʽ��������
	������ַ��������Ϊ256���ַ�
���磺
���룺���ո�a a 112 c���ո񣩻س�
�����4
*/
int main()
{
	char s[256] = {0};
	char *p = s;
	gets(p);
	int len = strlen(p), num = 0, i = 0;
	while(*(p + i) != '\0' && i < len - 1) {
		if(*(p + i) != ' ' && *(p + i + 1) == ' ')
			num++;
		i++;
	}
	if(*(p + len - 1) != ' ')
		num++;
	printf("%d", num);
	system("pause");
}
