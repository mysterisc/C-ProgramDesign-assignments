#include<stdio.h>

/*
设有一个3位数，它的百位数、十位数、个位数的立方和正好等于这个3位数，如153=1+125+27。
编写函数，返回小于等于传入参数n且满足该条件的三位数（称为水仙花数）的个数。
（指定函数原型：int find(int n)）
输入输出格式要求：
	编写函数int find(int n);
	返回值要求：如果传入参数n不是三位数或者在该范围内没有找到，则find返回0，
                    否则返回找到的水仙花数的个数。
        注意：不要在find函数中打印（如调用printf或puts等函数）任何数据，否则视为错误。
例如：
n为：400
find函数应返回3
*/

int find(int n) {
	if(n > 999) return 0;
	int sum = 0, a, b, c;
	for(int i = n; i > 99; i--) {
		a = i % 10;
		b = (i % 100) / 10;
		c = i / 100;
		if(i == a * a * a + b * b * b + c * c * c) {
			sum++;
		}
	}
	return sum;
}