#include<stdio.h>
#include<stdlib.h>

/*
定义一个时钟结构体类型：
struct clock
{
    int hour;
    int minute;
    int second;
};

typedef struct clock CLOCK;
然后，编程实现将时钟模拟显示在屏幕上。

例如,10点20分3秒
输入
10,20,3
输出
10:20:03

例如,输入非法时间
输入
25,100,200
输出
error
*/

struct clock
{
	int hour;
	int minute;
	int second;
};

int main() {
	struct clock CLOCK;
	scanf("%d,%d,%d", &CLOCK.hour, &CLOCK.minute, &CLOCK.second);
	if(CLOCK.hour > 24 || CLOCK.hour < 0) {
		printf("error");
		return 0;
	}
	if(CLOCK.minute > 60 || CLOCK.minute < 0) {
		printf("error");
		return 0;
	}
	if(CLOCK.second > 60 || CLOCK.second < 0) {
		printf("error");
		return 0;
	}
	if(CLOCK.hour < 10) {
		printf("0%d:",  CLOCK.hour);
	} else printf("%d:",  CLOCK.hour);
	if(CLOCK.minute < 10) {
		printf("0%d:",  CLOCK.minute);
	} else printf("%d:",  CLOCK.minute);
	if(CLOCK.second < 10) {
		printf("0%d", CLOCK.second);
		system("pause");
		return 0;
	} else {
		printf("%d", CLOCK.second);
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

