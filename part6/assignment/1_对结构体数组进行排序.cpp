#include<stdio.h>

/*
对结构体数组进行排序。

题目描述：
struct Person{
　　int no;
　　int age;
　　int height;
}
实现sort方法对结构体数组进行排序。
void sort(Person * array,int n);

根据no从小到大排序；如果no相同则根据age排序；如果age相同，则根据height排序。

注意：
遇到异常情况，输出"error"；否则不要随意输出，会视为错误。
*/

struct Person{
	int no;
	int age;
	int height;
};

void sort(Person * array,int n) {
	if(array == NULL || n < 0) {
		printf("error");
		return;
	}
	struct Person temp;
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(array[j].no > array[j+1].no) {
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
			else if(array[j].no == array[j+1].no) {
				if(array[j].age > array[j+1].age) {
					temp = array[j+1];
					array[j+1] = array[j];
					array[j] = temp;
				}
				else if(array[j].age == array[j+1].age) {
					if(array[j].height > array[j+1].height) {
						temp = array[j+1];
					array[j+1] = array[j];
					array[j] = temp;
					}
				}
			}
		}
	}
}