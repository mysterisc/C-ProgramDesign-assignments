#include<stdio.h>
#include<stdlib.h>

/*
����������n��1-10��,��1-n�Ľ׳�֮�ͣ�����������س��������쳣������粻��1-10�����������"error"������Ҫ���������
���磬����4�����33��
����7�����5913�س���
*/

int main() {
	int n, n_ = 1, sum = 0;
	scanf("%d", &n);
	if(1 <= n && n <= 10) {
		for(int i = 1; i <= n; i++) {
			n_ *= i;
			sum += n_;
		}
		printf("%d\n", sum);
	}
	else {
		printf("error");
	}
	system("pause");
	return 0;
}