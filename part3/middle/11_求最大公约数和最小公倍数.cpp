#include<stdio.h>
#include<stdlib.h>

/*
����2���������ո����֣���������Լ������С�����������������֣�
��������5�ո�10�����ӦΪ5,10
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