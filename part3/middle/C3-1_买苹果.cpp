#include<stdio.h>
#include<stdlib.h>

/*
ÿ��ƻ��0.8Ԫ
��һ����2��ƻ��
�ӵڶ��쿪ʼ��ÿ����ǰһ���2��
ֱ�������ƻ���ܸ����ﵽ������100�����ֵ

��ÿ��ƽ��Ҫ������Ǯ(������λС��)
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