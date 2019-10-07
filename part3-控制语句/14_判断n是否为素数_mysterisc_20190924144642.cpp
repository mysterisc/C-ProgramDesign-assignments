#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int a, is_prime=1;
	scanf_s("%d",&a,1);
	if(a<4) printf("error");
	for(int i=2;i<= sqrt(double(a));i++){
		if(a%i==0){
			is_prime = 0;
			break;
		};
	}
	if(is_prime == 1) printf("yes");
	else printf("no");
	system("pause");
	return 0;
}