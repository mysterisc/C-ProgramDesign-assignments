#include<stdio.h>
#include<stdlib.h>

/*
编写程序，输入一个字符串，分别统计输出该字符串中的字母a和d的个数。

输入输出格式要求：
	输入格式：string回车
例如：
输入：thedaythemonththeyear123回车
输出：a:2,d:1
输入：a
输出：a:1,d:0
*/

int main() {
	char s[100];
	int i = 0, numa = 0, numd = 0;
	scanf("%s", s);
	while(s[i] != '\0') {
		if(s[i] == 'a') numa++;
		if(s[i] == 'd') numd++;
		i++;
	}
	printf("a:%d,d:%d", numa, numd);
	system("pause");
	return 0;
}

