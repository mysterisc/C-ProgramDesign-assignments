#include<stdio.h>
#include<stdlib.h>

/*
�������10������������С�����˳�������ʹ��,��Ϊ�������
ע�⣺1������ΪӢ�����뷨�ж��ţ�2��������������Ϊ��������
����
10 9 8 7 6 5 4 3 2 1
���
1,2,3,4,5,6,7,8,9,10
*/

int main() {
	int arr[10];
	for(int i=0;i<10;i++) {
		scanf("%d", &arr[i]);
	}
	int temp;
	for(int j=0;j<9;j++) {
		for(int k=0;k<9;k++){
			if(arr[k]>arr[k+1]){
				temp=arr[k+1];
				arr[k+1]=arr[k];
				arr[k]=temp;
			}
		}
	}
	for(int m=0;m<9;m++){
		printf("%d,", arr[m]);
	}
	printf("%d",arr[9]);
	system("pause");
}