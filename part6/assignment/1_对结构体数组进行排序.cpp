#include<stdio.h>

/*
�Խṹ�������������

��Ŀ������
struct Person{
����int no;
����int age;
����int height;
}
ʵ��sort�����Խṹ�������������
void sort(Person * array,int n);

����no��С�����������no��ͬ�����age�������age��ͬ�������height����

ע�⣺
�����쳣��������"error"������Ҫ�������������Ϊ����
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