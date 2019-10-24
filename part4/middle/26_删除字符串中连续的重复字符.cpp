#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
实现删除字符串中连续的重复字符（除字母和数字）。

输入为字符串，将字符串中连续重复的，不是字母且不是数字的字符删去，然后输出处理后的字符串。
输入字符串最长50个字符，之后截断，只输出处理后的字符串。


例如
输入11+++2==13回车
输出11+2=3
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

