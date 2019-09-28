/*
@filename:10-4.c
@Author:RaibFlee
@description:
4.编写一个函数，返回储存在double类型数组中最大值的下标，并在一
个简单的程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>

int max(int [], int);

int main() {
	system("chcp 65001");
	int x[5] = {1, 2, 6, 4, 5};
	printf("max:%d", max(x, 5));
	return 0;
}

int max(int ar[], int size) {
	int max = ar[0];
	int pos=0;
	for (int i = 1; i < size; ++i) {
		if (max < ar[i]){
			max = ar[i];
			pos=i;
		}
	}
	return pos;
}
