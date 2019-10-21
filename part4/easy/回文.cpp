#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
回文测试：输入一30个字符以内的字符串，判断是否为回文；如果是，则打印"true"；否则打印"false"。像"aba"这样的从左往右读与从右往左读一致就是回文。

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

