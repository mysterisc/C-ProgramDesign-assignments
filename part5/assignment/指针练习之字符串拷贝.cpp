#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
利用指针编写C程序，实现如下功能：
接收从键盘输入的一个字符串，并将其所有字符依次拷贝到另一字符串中，要求在拷贝的过程中每两个字符后增加一个*，完成拷贝后输出新字符串，并在输出完成后输出回车换行符表示结束。
注意：如果该字符串已到末尾，则不再加*
样例输入1：ab2d3c
样例输出1：ab*2d*3c（末尾有回车换行）
样例输入2：ab2d3
样例输出2：ab*2d*3（末尾有回车换行）
样例输入3：ab*cde
样例输出3：ab**c*de（末尾有回车换行）
*/

int main() {
	char s1[20], s2[20];
	char *p1 = s1, *p2 = s2;
	scanf("%s", p1);
	int len = strlen(p1), j = 0;
	for(int i = 0; i < len; i++) {
		// p2[i] = p1[i];
		*(p2 + j) = *(p1 + i);
		j++;
		if((i + 1) % 2 == 0 && (i != len - 1)) {
			*(p2 + j) = '*';
			j++;
		}
	}
	p2[j] = '\0';
	printf("%s\n", p2);
	system("pause");
	return 0;
}