#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*
输入一个大于3的整数n，判断它是否为素数。（输出yes/no）
例如，输入4，输出no；
输入7，输出yes。
错误输入，则输出error。所有输出没有回车符号。
*/

int main() {
	int a, is_prime=1;
	scanf_s("%d",&a,1);
	if(a<4) printf("error");
	for(int i=2;i<= sqrt(double(a));i++){
		if(a%i==0){
			is_prime = 0;
			break;
		};
	}
	if(is_prime == 1) printf("yes");
	else printf("no");
	system("pause");
	return 0;
}