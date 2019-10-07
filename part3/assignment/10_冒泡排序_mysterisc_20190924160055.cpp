#include<stdio.h>
#include<stdlib.h>

/*
将输入的10个整数，按从小到大的顺序输出（使用,作为间隔）。
注意：1、逗号为英文输入法中逗号；2、任意多余输出视为错误。例如
输入
10 9 8 7 6 5 4 3 2 1
输出
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