#include<stdio.h>
#include<stdlib.h>

/*
��Ŀ3������n(n<100)�����������������۰�����㷨������x�����е�λ�á�
����,
����:
5
1,2,3,4,5
2
���:
2
���Լ����У�x��һ�������������С������ô�������߼���
*/

int main() {
	int arr[100] = {0};
	int n, x;
	scanf("%d", &n);
	for(int i = 0; i < n ; i++) {
		if(i == n - 1) scanf("%d", &arr[i]);
		else scanf("%d,", &arr[i]);
	}
	scanf("%d", &x);
	int l = 0, r = n - 1, mid;
	while(l <= r) {
		mid = (l + r) / 2;
		if(arr[mid] == x) {
			printf("%d", mid + 1);
			break;
		}
		else if(arr[mid] < x) {
			l = mid + 1;
		}
		else r = mid - 1;
	}
	system("pause");
	return 0;
}

