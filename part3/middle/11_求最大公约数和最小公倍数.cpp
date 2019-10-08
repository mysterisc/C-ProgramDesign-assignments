#include<stdio.h>
#include<stdlib.h>

/*
输入2个整数（空格区分），输出最大公约数和最小公倍数（，逗号区分）
例如输入5空格10，输出应为5,10
*/

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	int max, min = a * b;
	while(b) {
		c = a % b;
		a = b;
		b = c;
	}
	max = a;
	min = min /max;
	printf("%d,%d", max, min);
	system("pause");
	return 0;
}