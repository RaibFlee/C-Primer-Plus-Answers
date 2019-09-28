/*
@filename:10-5.c
@Author:RaibFlee
@description:
5.编写一个函数，返回储存在double类型数组中最大值和最小值的差
值，并在一个简单的程序中测试该函数。,
*/


#include <stdio.h>
#include <stdlib.h>

int max_sub_min(int [], int);

int main() {
	system("chcp 65001");
	int x[5] = {1, 2, 6, 4, 5};
	printf("max-min:%d", max_sub_min(x, 5));
	return 0;
}

int max_sub_min(int ar[], int size) {
	int max = ar[0];
	int min = ar[0];
	for (int i = 1; i < size; ++i) {
		if (max < ar[i]) {
			max = ar[i];
		}
		if (min > ar[i]) {
			min = ar[i];
		}
	}
	return max - min;
}
