#include<stdio.h>
#include<stdlib.h>

/*
�������������߳��ȣ��ж��Ƿ�Ϊ�����Ρ��ǣ����yes�������no���߳���Ϊ����ʱ�����error��
���������ߵĳ����Զ��ŷָ������磺
���룺1,2,3�س�
�����no
*/

int main() {
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	if(a <= 0 || b <= 0 || c <= 0) {
		printf("error");
	}
	if(a + b > c && a + c > b && b + c > a) {
		printf("yes");
	}
	else {
		printf("no");
	}
	system("pause");
	return 0;
}