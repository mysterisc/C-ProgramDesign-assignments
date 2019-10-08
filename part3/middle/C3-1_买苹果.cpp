#include<stdio.h>
#include<stdlib.h>

/*
每个苹果0.8元
第一天买2个苹果
从第二天开始，每天买前一天的2倍
直至购买的苹果总个数达到不超过100的最大值

求每天平均要花多少钱(保留两位小数)
*/

int main() {
	int a = 2, sum = 0, day = 0;
	while((sum + a) <= 100) {
		sum += a;
		day ++;
		a *= 2;
	}
	float m = (sum * 0.8)/day;
	printf("%.2f", m);
	system("pause");
	return 0;
}