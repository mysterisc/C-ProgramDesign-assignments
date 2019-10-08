#include<stdio.h>
#include<stdlib.h>

/*
输入正整数n（1-10）,求1-n的阶乘之和，最后必须输出回车。遇到异常情况（如不是1-10中数），输出"error"；否则不要随意输出。
例如，输入4，输出33；
输入7，输出5913回车。
*/

int main() {
	int n, n_ = 1, sum = 0;
	scanf("%d", &n);
	if(1 <= n && n <= 10) {
		for(int i = 1; i <= n; i++) {
			n_ *= i;
			sum += n_;
		}
		printf("%d\n", sum);
	}
	else {
		printf("error");
	}
	system("pause");
	return 0;
}