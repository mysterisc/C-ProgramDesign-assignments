#include<stdio.h>
#include<stdlib.h>

/*
编写程序，计算
	e^x=1+x+(x^2)/(2!)+(x^3)/(3!)+(x^4)/(4!)+...+(x^n)/n!

说明：e^x表示e的x次方，2!表示2的阶乘

输入输出格式要求：
	输入格式：x n回车
	e^x, x, n均用double类型存储。
	要求输出小数点后6位。
	只输出运算结果，请不要输出其他字符，遇到异常情况（如n为负数），输出error
例如：
输入：3 10回车
输出：20.079665
输入：5.24 11回车
输出：187.210665
输入：5 -10
输出：error
*/

int main() {
	double e_x=1,x,n,n_=1,x_=1;
	scanf("%lf%lf",&x,&n);
	//printf("%lf",n);
	if(n<0){
		printf("error");
	}
	if(n==0) printf("%1f",e_x);
	e_x = 1+x;
	if(n==1) printf("%lf", e_x);

	for(int i=2;i<=n;i++){
		for(int j=1; j<=i;j++){
			x_ *= x;
		}
		n_ *= i;
		e_x += x_/n_;
		x_ = 1;
	}
	printf("%.6lf",e_x);
	system("pause");
}