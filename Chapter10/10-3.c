/*
@filename:10-3.c
@Author:RaibFlee
@description:
3.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的
程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>
int max(int [],int);
int main() {
	system("chcp 65001");
	int x[5]={1,2,6,4,5};
	printf("max:%d",max(x,5));
		return 0;
}
int max(int ar[],int size){
	int max=ar[0];
	for (int i = 1; i < size; ++i) {
		if (max<ar[i])
			max=ar[i];
	}
	return max;
}
