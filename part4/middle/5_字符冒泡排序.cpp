#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
����5���ַ�������󰴴�С����˳�������
Ҫ������5�������ַ���������������á�,�������κ������ַ�����ͬһ�������

���磺   ���룺A5av3   �����3,5,A,a,v

*/

int main() {
	char s[6], temp;
	scanf("%s", s);
	//printf("%d", len);
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 5 - i - 1; j++) {
			if(s[j] > s[j+1]) {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
	for(int k = 0; k < 4; k++) {
		printf("%c,", s[k]);
	}
	printf("%c", s[4]);
	system("pause");
	return 0;
}