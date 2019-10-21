#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
接收输入的一个字符串(无空格、制表符等)，
将字符串中的小写字母转换为大写字母，输出转换后的字符串，最后必须输出回车。
最长输入20个有效字符（不包括回车）。
例如输入：apple 输出：APPLE
如果字符串中包含了其他字符，均不进行转换，只转换小写字母为大写字母。
如输入：test2test* 输出：TEST2TEST*
*/

int main() {
	char s[20];
	// scanf("%s", s);
	gets(s);
	int len =  strlen(s);
	for(int i = 0; i < len; i++) {
		if('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 32;
		}
		printf("%c", s[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

