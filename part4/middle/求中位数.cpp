#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
题目描述：
编写程序，实现求集合（浮点数）的中位数的功能。中位数指n个数排序后，（1+n）/2位置处的元素。n为偶数时，中位数取n/2位置处元素。

输入格式：依次为元素个数n和元素序列。
输出格式：输出中位数。
注意：1、输入n错误时，输出ERROR（大写）并结束程序2、任意多余输出视为错误。

例如输入
4回车
4空格3空格2空格1回车
正确输出：
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

