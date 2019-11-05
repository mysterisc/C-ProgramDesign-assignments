#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
输入一行字符，统计其中包括多少单词，单词之间用空格分隔。

输入输出格式要求：
	输入格式：a b c d回车（空格可在任意位置，列如行头行尾可能会有空格。另外数字和字母一样，也可作为单词）
	输出格式：单词数
	输入的字符串长度最长为256个字符
例如：
输入：（空格）a a 112 c（空格）回车
输出：4
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
