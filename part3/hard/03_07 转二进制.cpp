#include<stdio.h>

/*
�������Ĺ����ǽ��β�x��ֵת��Ϊ�������������õĶ�����������һ��һά�����з��أ��������������λ�����±�Ϊ0��Ԫ���С�
*/

int fun(int x, int b[])
{
	int k = 0, r;
	do
	{
		b[k] = x % 2;
		x /= 2;
		k++;
	} while (x);
	return k;
}
void main()
{
	int data = 0;
	scanf("%d",&data);
	int buf[100] = { 0 };
	int count = fun(data, buf);
	for (int i = count; i > 0; i--)
	{
		printf("%d", buf[i - 1]);
	}
}

