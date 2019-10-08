#include<stdio.h>
#include<stdlib.h>

/*
请编程序将：输入单词译成密码，密码规律是：用原来的字母后面的第4个字母代替原来的字母。
例如，字母'A'后面第4个字母是"E",用"E"代替"A"，"Z"用"D"代替。例如，输入"China"应译为"Glmre"。
请编一程序，将输入单词译为密码后输出。
（回车结束单词输入；单词最长20，之后截断;输入单词长度为0或者输入不为字母，输出error）。
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