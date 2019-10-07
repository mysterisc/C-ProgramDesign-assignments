#include<stdio.h>
#include<stdlib.h>

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