#include<stdio.h>
#include<stdlib.h>

/*
输入一个年份，判断这一年是不是闰年
是则输出yes,不是输出no
*/

int main() {
	int year;
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("yes");
	}
	else printf("no");
	system("pause");
	return 0;
}