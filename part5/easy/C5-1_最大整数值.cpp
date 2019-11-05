#include<stdio.h>
#include<stdlib.h>

/*
输入3个整数，用指针指向最大整数并输出
输入:
1 2 3
输出:
3
*/

int main()
{
	int a[3] = {0}, max = 0, *p = &max;
	for(int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if(a[i] > *p) {
			p = &a[i];
		}
	}
	printf("%d", *p);
	system("pause");
}
