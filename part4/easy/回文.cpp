#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
���Ĳ��ԣ�����һ30���ַ����ڵ��ַ������ж��Ƿ�Ϊ���ģ�����ǣ����ӡ"true"�������ӡ"false"����"aba"�����Ĵ������Ҷ�����������һ�¾��ǻ��ġ�

*/

int main() {
	char s[30];
	// scanf("%s", s);
	gets(s);
	int len =  strlen(s);
	for(int i = 0; i < len; i++) {
		int j = len - i - 1;
		if(s[i] != s[j]) {
			printf("false");
			system("pause");
			return 0;
		}
	}
	printf("true");
	system("pause");
	return 0;
}

