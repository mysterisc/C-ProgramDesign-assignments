#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
ʵ��ɾ���ַ������������ظ��ַ�������ĸ�����֣���

����Ϊ�ַ��������ַ����������ظ��ģ�������ĸ�Ҳ������ֵ��ַ�ɾȥ��Ȼ������������ַ�����
�����ַ����50���ַ���֮��ضϣ�ֻ����������ַ�����


����
����11+++2==13�س�
���11+2=3
*/

int main() {
	char s[50];
	scanf("%s", s);
	int len = strlen(s) , i;
	for(i = 0; i < len - 1; i++) {
		if(s[i] == s[i+1]) {
			if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
				printf("%c", s[i]);
			}
		}
		else printf("%c", s[i]);
	}
	printf("%c", s[i]);
	system("pause");
	return 0;
}

