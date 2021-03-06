#include<stdio.h>
#include<stdlib.h>

/*
main函数写成下面形式：
struct node
{
int data;
struct node *next;
};
int main(int data[],int n)；
然后以数组data里面的数据生成带头结点的单链表，头指针header作为main函数的返回值,需要将头指针转换为int返回。
定义头指针：struct node * header;那么main函数返回时需要return (int)header;
header指针指向的单链表数据和data里面数据顺序一致。
比如data存放的数据是1 2 3,则n=3，且单链表header所指的数据结点的数据依次为1,2,3。
如果出现错误，则输出"error"，并返回NULL。
头结点定义如下：
struct node
{
int data;
struct node *next;
};
*/

struct node
{
	int num;
	struct node *next;
};

int main(int data[],int n)
{
	struct node *header, *L;
	header = (struct node *)malloc(sizeof(struct node));
	header->next = NULL;
	for(int i = n  - 1; i >= 0;i--) {
		L = (struct node *)malloc(sizeof(struct node));
		L->num = data[i];
		L->next = header->next;
		header->next = L;
	}
	return (int)header;
}
