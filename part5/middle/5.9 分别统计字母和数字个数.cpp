#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
编写程序，输入一个字符串，分别统计输出该字符串中的字母个数和数字个数。

输入输出格式要求：
	输入格式：string回车
例如：
输入：the day the month the year 123回车
输出：letters:21,digits:3
输入：aaabacad回车
输出：letters:8,digits:0
*/

int main()
{
	char s[50] = {0};
	char *p = s;
	gets(p);
	int len = strlen(p), num = 0, str = 0;
	for(int i = 0; i < len; i++) {
		if(*(p + i) >= '0' && *(p + i) <= '9') {
			num++;
		}
		if((*(p + i) >= 'a' && *(p + i) <= 'z') || (*(p + i) >= 'A' && *(p + i) <= 'Z')) {
			str++;
		}
	}
	printf("letters:%d,digits:%d", str, num);
	system("pause");
}
