#include<stdio.h>
#include<stdlib.h>

/*
��������n��Ȼ�����n��1-5�η�(�ո�����)������������س�
��������-1�����-1 1 -1 1 -1�س�
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