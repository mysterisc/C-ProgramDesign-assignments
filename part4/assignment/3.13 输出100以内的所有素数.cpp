#include<stdio.h>
#include<stdlib.h>

/*
��дһ�������ҳ�1~100�е�����������

���������ʽҪ��
	Ҫ��ÿ�������涼Ҫ������ţ�
	�벻Ҫ��������ַ�
���磺
�����2,3,5,
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

