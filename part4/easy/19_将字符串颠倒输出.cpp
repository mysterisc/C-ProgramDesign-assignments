#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
输入一个字符串(无空格)，将字符串颠倒输出。最长50个字符。
例如输入apple，输出elppa。
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

