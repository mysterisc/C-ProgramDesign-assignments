#include<stdio.h>
#include<stdlib.h>

/*
有一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第三个月后每个月又生一对兔子。
假设所有的兔子都不死，问第n个月时有几对兔子。即求第n个Fibonacci数。
例如输入1，输出1；
输入2，输出1；
输入3，输出2；
输入4，输出3；
*/

int main() {
	int n, a = 1, b = 1, c;
	scanf("%d", &n);
	if(n <= 2) {
		printf("1");
		return 0;
	}
	for(int i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", c);
	system("pause");
	return 0;
}

/*
method 2:

#include<stdio.h>
#include<stdlib.h>

int RecursiveFibo(int n) {
	return (n < 2) ? n : RecursiveFibo(n - 1) + RecursiveFibo(n - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", RecursiveFibo(n));
	system("pause");
	return 0;
}
*/