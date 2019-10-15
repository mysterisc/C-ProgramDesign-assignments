#include<stdio.h>
#include<stdlib.h>

/*
编写程序，求满足公式的变量k的最大值：
		2^k <= m
其中，m是程序输入的一个正整数。

2^k表示2的k次方。

输入输出格式要求：
	输入格式：m回车
	程序中要求全部使用unsigned int 类型数据。scanf和printf中使用%u
	只输出运算结果，请不要输出其他字符。
例如：
输入：16回车
输出：4
输入：2140000000回车
输出：30
*/

int main() {
    unsigned long m, n = 2, k = 0;
	scanf("%u", &m);
	while(m/2 > 0) {
		m = m / 2;
		k++;
	}
	printf("%u", k);
	system("pause");
}

