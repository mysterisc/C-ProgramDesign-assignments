#include<stdio.h>
#include<stdlib.h>

/*
接收输入的一个字符串(无空格、制表符等)，
原封不动输出该字符串，最后必须输出回车。
最长输入20个有效字符（不包括回车）。
例如输入：apple 输出：apple
输入：test2test* 输出：test2test*
*/

int main() {
	char s[20];
	gets(s);
	puts(s);
	printf("\n");
	system("pause");
	return 0;
}