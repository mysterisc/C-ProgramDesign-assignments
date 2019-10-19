#include<stdio.h>
#include<stdlib.h>

/*
题目3：输入n(n<100)个有序正数，请用折半查找算法，查找x在其中的位置。
例如,
输入:
5
1,2,3,4,5
2
输出:
2
测试集合中，x数一定在正数数组中。即不用处理错误逻辑。
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

