#include<stdio.h>
#include<stdlib.h>

/*
�����򽫣����뵥��������룬��������ǣ���ԭ������ĸ����ĵ�4����ĸ����ԭ������ĸ��
���磬��ĸ'A'�����4����ĸ��"E",��"E"����"A"��"Z"��"D"���档���磬����"China"Ӧ��Ϊ"Glmre"��
���һ���򣬽����뵥����Ϊ����������
���س������������룻�����20��֮��ض�;���뵥�ʳ���Ϊ0�������벻Ϊ��ĸ�����error����
*/
int main() {
	char c[20];
	gets(c);
	int i=0, er=0;
	while(c[i] != '\0') {
		if((c[i]>='a'&&c[i]<'w') || (c[i]>='A'&&c[i]<'W')){
			c[i] += 4;
			//printf("%c",c[i]);
			i++;
		}
		else if(('w'<=c[i]&&c[i]<='z') || ('W'<=c[i]&&c[i]<='Z')) {
			c[i] -= 22;
			i++;
		}
		else{
			printf("error");
			er=1;
			break;
		}
	}
	if(er==0) puts(c);
	system("pause");
	return 0;
}