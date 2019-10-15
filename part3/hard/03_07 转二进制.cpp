#include<stdio.h>

/*
下面程序的功能是将形参x的值转换为二进制数，所得的二进制数放在一个一维数组中返回，二进制数的最低位放在下标为0的元素中。
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

