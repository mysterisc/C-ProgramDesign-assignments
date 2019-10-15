#include<stdio.h>
#include<stdlib.h>

/*
��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӡ�С���ӳ����������º�ÿ��������һ�����ӡ�
�������е����Ӷ��������ʵ�n����ʱ�м������ӡ������n��Fibonacci����
��������1�����1��
����2�����1��
����3�����2��
����4�����3��
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