#include"acllib.h"
#include<time.h>
#include<iostream>
using namespace std;    //��.h����c�ķ�ʽ��c++Ϊ�˺�c���𣬲��������ռ�ķ�ʽ
				        //<iostream>����std�����ռ����

ACL_Image image[4];
const int mw = 300, mh = 300;
const char *tom = "tom.bmp";
const int width = 100, height = 100;
void timerEvent(int id);
void keyboardEvent(int key, int event);
void paint();

struct animal {
	int x, y;
	int num;           //���ɵ�0-3�������������4��ͼƬ���±�λ��
}animals[3][3];


int Setup() {
	int i, j;
	srand((unsigned)time(NULL));
	initWindow("test", DEFAULT,DEFAULT, mw, mh);
	registerTimerEvent(timerEvent);
	registerKeyboardEvent(keyboardEvent);
	loadImage(tom, &image[0]);
	loadImage("heart.bmp", &image[1]);
	loadImage("jerry.bmp", &image[2]);
	loadImage("dog.bmp", &image[3]);
	for(i = 0; i < 3; i++) {               //����3*3������λ�ú��������ͼƬ�±�
		for(j = 0; j < 3; j++) {
			animals[i][j].num = rand()%4;
			animals[i][j].x = j*100;
			animals[i][j].y = i*100;
		}
	}
	startTimer(0, 50);
	paint();
	return 0;
}

void timerEvent(int id){
	int i, j;
	switch (id)
	{
	case 0:
		//����һ��
		for (i = 2;i >=0;--i)
		{
			for (j = 0;j < 3;++j)
			{
				animals[i][j].num = animals[i - 1][j].num;
			}
		}
		//��0�������������
		for (i = 0;i < 3;++i)
			animals[0][i].num = rand() % 4;
		break;
	default:
		break;
	}
	paint();
}

void keyboardEvent(int key, int event){
	char s[20];
	if(event != BUTTON_DOWN) return;
	beginPaint();
	clearDevice();
	setTextSize(30);
	setTextColor(BLACK);
	if(key == VK_RETURN) {   //�س�������
		if (animals[1][0].num == animals[1][1].num && animals[1][1].num == animals[1][2].num) {
			sprintf_s(s, "YOU WIN��");
			paintText(width, height, s);
			cancelTimer(0);
		}
		else {
			sprintf_s(s, "You Lost��");
			paintText(width, height, s);
			cancelTimer(0);
		}
	}
	endPaint();
}

void paint(){
	int i, j;
	beginPaint();
	clearDevice();
	for (i = 0;i < 3;++i)
	{
		for (j = 0;j < 3;++j)
		{
			putImageScale(&image[animals[i][j].num],animals[i][j].x, animals[i][j].y, width, height);
		}
	}
	endPaint();
}