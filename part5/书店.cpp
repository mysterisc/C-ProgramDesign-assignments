#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Book
{
	char num[13];
	char name[50];
	float price;
	char publisher[50];
	char publish_time[8];
}Book;

int main()
{
	char name[50];
	gets(name);
	FILE *fp = fopen(name, "wt+");
	int n;
	scanf("%d", &n);
	fprintf(fp, "%d ", n);
	Book *p = (Book *)calloc(n, sizeof(Book));
	for(int i = 0; i < n; i++) {
		scanf("%s%s%f%s%s", &p[i].num, &p[i].name, &p[i].price, &p[i].publisher, &p[i].publish_time);
		// fwrite(p + i, sizeof(Book), 1, fp);
		fprintf(fp, "%s %s %f %s %s ", p[i].num, p[i].name, p[i].price, p[i].publisher, p[i].publish_time);
	}
	printf("�����Ϣ��\n%d��\n", n);
	/*
	for(int i = 0; i < n; i++) {
		printf("��ţ�%s ������%s �۸�%f �����磺%s �������ڣ�%s\n", p[i].num, p[i].name, p[i].price, p[i].publisher, p[i].publish_time);
	}*/
	rewind(fp);
	Book * q = (Book *)calloc(n, sizeof(Book));
	int m;
	fscanf(fp, "%d ", &m);
	for(int i = 0; i < m; i++) {
		fscanf(fp, "%s %s %f %s %s ", &q[i].num, &q[i].name, &q[i].price, &q[i].publisher, &q[i].publish_time);
	}
	for(int i = 0; i < m; i++) {
		printf("��ţ�%s ������%s �۸�%f �����磺%s �������ڣ�%s\n", q[i].num, q[i].name, q[i].price, q[i].publisher, q[i].publish_time);
	}
	char search_name[50];
	while (getchar() != '\n');
	scanf("�����Ҫ���ҵ�������%s", &search_name);
	for(int i = 0; i < m; i++) {
		if(strcmp(q[i].name, search_name)) {
			printf("��ţ�%s ������%s �۸�%f �����磺%s �������ڣ�%s\n", p[i].num, p[i].name, p[i].price, p[i].publisher, p[i].publish_time);
		}
	}
	printf("�����۸�С��23���飺\n");
	for(int i = 0; i < m; i++) {
		if(q[i].price < 23) {
			printf("��ţ�%s ������%s �۸�%f �����磺%s �������ڣ�%s\n", p[i].num, p[i].name, p[i].price, p[i].publisher, p[i].publish_time);
		}
	}
	fclose(fp);
	system("pause");
	return 0;
}
