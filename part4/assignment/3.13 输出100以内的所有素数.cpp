#include<stdio.h>
#include<stdlib.h>

/*
编写一个程序，找出1~100中的所有素数。

输入输出格式要求：
	要求每个数后面都要输出逗号，
	请不要输出其他字符
例如：
输出：2,3,5,
*/

int main() {
	int prime[100] = {0};
	int k = 2;
	while(k < 100) {
		for(int i = 2; i * k < 100; i++) {
			prime[i*k] = 1;
		}
		k++;
	}
	prime[0] = 1;
	prime[1] = 1;
	for(int i = 0; i < 100; i++) {
		if(prime[i] == 0) {
			printf("%d,", i);
		}
	}
	system("pause");
	return 0;
}

