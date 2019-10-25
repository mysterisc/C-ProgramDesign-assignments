#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
��дѧ������ϵͳ������ѧ������Ϣ������������ƴ�������20���ַ������Ա���/Ů����1��ʾ�У�2��ʾŮ����
���գ�19850101�������գ�������ߣ���mΪ��λ��������Ҫ����C���ԡ�΢�������ſεĳɼ������д����ʵ�ֹ��ܣ�
����ѧ����������ÿ��ѧ������Ϣ�����ÿ�ſγ̵���ƽ���ɼ�����߷ֺ���ͷ֣��Լ������߷ֵ�ѧ������Ϣ��
��Ҫע�����ĳ�ſγ���߷ֵ�ѧ�����ܲ�ֻһ�ˡ�

���������ʽҪ��
	������ʱ������λС�����밴�������н��������������������ַ�
���磺
���룺3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90�س�
�����
C_average:87�س�
C_max:89�س�
lisi 1 19920202 1.56 89 88�س�
wangwu 2 19910303 1.60 89 90�س�
C_min:85�س�
Calculus_average:89�س�
Calculus_max:90�س�
zhangsan 1 19910101 1.85 85 90�س�
wangwu 2 19910303 1.60 89 90�س�
Calculus_min:88�س�
*/

typedef struct student
{
	char name[20];
	int gender;
	int birth;
	float height;
	int score_c;
	int score_calculus;
}student;

int main() {
	int n;
	scanf("%d", &n);
	student *stu;
	stu = (student *)calloc(n, sizeof(student));
	// ��������
	for(int i = 0; i < n; i++) {
		scanf("%s%d%d%f%d%d", &stu[i].name, &stu[i].gender, &stu[i].birth, &stu[i].height, &stu[i].score_c, &stu[i].score_calculus);
	}
	int c_sum = 0, calculus_sum = 0, c_average = 0, c_max = 0, c_min = 100, calculus_average = 0, calculus_max = 0, calculus_min = 100;  //������Ҫ�ı���
	// ȡ��c���ԡ�΢���ֵ��ܷ֡���߷֡���ͷ�
	for(int i = 0; i < n; i++) {
		c_sum += stu[i].score_c;
		calculus_sum += stu[i].score_calculus;
		if(stu[i].score_c > c_max) {
			c_max = stu[i].score_c;
		}
		if(stu[i].score_c < c_min) {
			c_min = stu[i].score_c;
		}
		if(stu[i].score_calculus > calculus_max) {
			calculus_max = stu[i].score_calculus;
		}
		if(stu[i].score_calculus < calculus_min) {
			calculus_min = stu[i].score_calculus;
		}
	}
	// ��ӡ���
	printf("C_average:%d\nC_max:%d\n", c_sum / n, c_max);
	for(int i = 0; i < n; i++) {
		if(stu[i].score_c == c_max) {
			printf("%s %d %d %.2f %d %d\n", stu[i].name, stu[i].gender, stu[i].birth, stu[i].height, stu[i].score_c, stu[i].score_calculus);
		}
	}
	printf("C_min:%d\n", c_min);
	printf("Calculus_average:%d\nCalculus_max:%d\n", calculus_sum / n, calculus_max);
	for(int i = 0; i < n; i++) {
		if(stu[i].score_calculus == calculus_max) {
			printf("%s %d %d %.2f %d %d\n", stu[i].name, stu[i].gender, stu[i].birth, stu[i].height, stu[i].score_c, stu[i].score_calculus);
		}
	}
	printf("Calculus_min:%d\n", calculus_min);
	system("pause");
	return 0;
}