#include<stdio.h>
#include<stdlib.h>

/*
��д���򣬼���
	e^x=1+x+(x^2)/(2!)+(x^3)/(3!)+(x^4)/(4!)+...+(x^n)/n!

˵����e^x��ʾe��x�η���2!��ʾ2�Ľ׳�

���������ʽҪ��
	�����ʽ��x n�س�
	e^x, x, n����double���ʹ洢��
	Ҫ�����С�����6λ��
	ֻ������������벻Ҫ��������ַ��������쳣�������nΪ�����������error
���磺
���룺3 10�س�
�����20.079665
���룺5.24 11�س�
�����187.210665
���룺5 -10
�����error
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