#include<stdio.h>
#include<stdlib.h>

/*
��д���������㹫ʽ�ı���k�����ֵ��
		2^k <= m
���У�m�ǳ��������һ����������

2^k��ʾ2��k�η���

���������ʽҪ��
	�����ʽ��m�س�
	������Ҫ��ȫ��ʹ��unsigned int �������ݡ�scanf��printf��ʹ��%u
	ֻ������������벻Ҫ��������ַ���
���磺
���룺16�س�
�����4
���룺2140000000�س�
�����30
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

