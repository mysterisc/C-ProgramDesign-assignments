#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
��Ŀ������
��д����ʵ���󼯺ϣ�������������λ���Ĺ��ܡ���λ��ָn��������󣬣�1+n��/2λ�ô���Ԫ�ء�nΪż��ʱ����λ��ȡn/2λ�ô�Ԫ�ء�

�����ʽ������ΪԪ�ظ���n��Ԫ�����С�
�����ʽ�������λ����
ע�⣺1������n����ʱ�����ERROR����д������������2��������������Ϊ����

��������
4�س�
4�ո�3�ո�2�ո�1�س�
��ȷ�����
2
*/

int main() {
	int n;
	float *arr;
	scanf("%d", &n);
	if(n <1) printf("ERROR");
	arr = (float *)calloc(n, sizeof(float));
	for(int i =0; i < n; i++) {
		if(i == n - 1) scanf("%f", &arr[i]);
		else scanf("%f\n", &arr[i]);
	}
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n -i -1; j++) {
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%f", arr[(n+1)/2-1]);
	system("pause");
	return 0;
}

