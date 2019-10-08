#include<stdio.h>
#include<stdlib.h>

/*
输入整数n，然后输出n的1-5次方(空格区分)，最后必须输出回车
例如输入-1，输出-1 1 -1 1 -1回车
*/

int main() {
	int n, n_=1;
	scanf("%d", &n);
	//printf("%d\0", n);
	for(int i=1;i<5;i++) {
		n_ *= n;
		printf("%d ", n_);
	}
	n_ *= n;
	printf("%d\n", n_);
	system("pause");
	return 0;
}