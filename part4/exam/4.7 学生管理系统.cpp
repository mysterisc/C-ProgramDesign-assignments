#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
编写学生管理系统，其中学生的信息有姓名（汉语拼音，最多20个字符），性别（男/女，用1表示男，2表示女）、
生日（19850101（年月日））、身高（以m为单位），还需要处理C语言、微积分两门课的成绩，请编写程序实现功能：
输入学生的人数和每个学生的信息；输出每门课程的总平均成绩、最高分和最低分，以及获得最高分的学生的信息。
需要注意的是某门课程最高分的学生可能不只一人。

输入输出格式要求：
	身高输出时保留两位小数，请按照例子中进行输出，请勿输出其他字符
例如：
输入：3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90回车
输出：
C_average:87回车
C_max:89回车
lisi 1 19920202 1.56 89 88回车
wangwu 2 19910303 1.60 89 90回车
C_min:85回车
Calculus_average:89回车
Calculus_max:90回车
zhangsan 1 19910101 1.85 85 90回车
wangwu 2 19910303 1.60 89 90回车
Calculus_min:88回车
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
	// 输入数据
	for(int i = 0; i < n; i++) {
		scanf("%s%d%d%f%d%d", &stu[i].name, &stu[i].gender, &stu[i].birth, &stu[i].height, &stu[i].score_c, &stu[i].score_calculus);
	}
	int c_sum = 0, calculus_sum = 0, c_average = 0, c_max = 0, c_min = 100, calculus_average = 0, calculus_max = 0, calculus_min = 100;  //定义需要的变量
	// 取得c语言、微积分的总分、最高分、最低分
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
	// 打印结果
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