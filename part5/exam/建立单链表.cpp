#include<stdio.h>
#include<stdlib.h>

/*
main����д��������ʽ��
struct node
{
int data;
struct node *next;
};
int main(int data[],int n)��
Ȼ��������data������������ɴ�ͷ���ĵ�����ͷָ��header��Ϊmain�����ķ���ֵ,��Ҫ��ͷָ��ת��Ϊint���ء�
����ͷָ�룺struct node * header;��ômain��������ʱ��Ҫreturn (int)header;
headerָ��ָ��ĵ��������ݺ�data��������˳��һ�¡�
����data��ŵ�������1 2 3,��n=3���ҵ�����header��ָ�����ݽ�����������Ϊ1,2,3��
������ִ��������"error"��������NULL��
ͷ��㶨�����£�
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
