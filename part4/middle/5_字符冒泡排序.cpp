#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
输入5个字符，排序后按从小到大顺序输出。
要求：输入5个连续字符；输出除两两间用“,”外无任何其它字符，并同一行输出。

例如：   输入：A5av3   输出：3,5,A,a,v

*/

int main() {
	char s[6], temp;
	scanf("%s", s);
	//printf("%d", len);
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 5 - i - 1; j++) {
			if(s[j] > s[j+1]) {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
	for(int k = 0; k < 4; k++) {
		printf("%c,", s[k]);
	}
	printf("%c", s[4]);
	system("pause");
	return 0;
}