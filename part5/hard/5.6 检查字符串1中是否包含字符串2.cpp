#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
��д�������������ַ���string1��string2�������string1���Ƿ������string2��
����У������string2��string1�е���ʼλ�ã����û�У�����ʾ��NO�������string2��
string1�ж�γ��֣��������string1�г��ֵĴ����Լ�ÿ�γ��ֵ���ʼλ�ã����磺
	string1="the day the month the year";
	string2="the"
������ӦΪ���������Σ���ʼλ�÷ֱ��ǣ�0,8,18��
���磺
	string1="aaabacad"
	string2="a"
������ӦΪ��������Σ���ʼλ�÷ֱ��ǣ�0,1,2,4,6��

���������ʽҪ��
	�����ʽ��string1�س�string2�س�
���磺
���룺the day the month the year�س�the�س�
�����3times,0,8,18
���룺aaabacad�س�a�س�
�����5times,0,1,2,4,6
���룺aaabacad�س�e�س�
�����NO
*/

int main()
{
	char s1[100] = {0}, s2[100] = {0};
	char *p = s1, *q = s2;
	gets(p);
	gets(q);
	int len = strlen(p), j, i = 0, k = 0, index[100], start;
	while(*(p + i) != '\0') {
		j = 0;
		start = i;
		while(*(p + i) == *(q + j)) {
			j++;
			i++;
			if(*(p + i) == '\0' && *(q + j) != '\0')
				break;
			if(*(q + j) == '\0') {
				index[k] = start;
				k++;
				break;
			}
		}
		i = ++start;
	}
	if(k == 0) {
		printf("NO");
	}
	else {
		printf("%dtimes", k);
		for(int i = 0; i < k; i++) {
			printf(",%d", index[i]);
		}
	}
	system("pause");
}
