#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
编写程序，输入一个字符数组s1，然后将字符数组s1中的全部字符复制到字符字符数组s2，不能用strcpy。
赋值时，'\0'也要复制过去，并表示成转义字符输出。
例如输入：hello
输出：hello\0
*/

int main() {
	char s1[50], s2[50];
	int i = 0;
	scanf("%s", s1);
	while(s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}
	s2[i++] = '\\';
	s2[i++] = '0';
	s2[i] = '\0';
	printf("%s", s2);
	system("pause");
	return 0;
}

