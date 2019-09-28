/*
@filename:10-6.c
@Author:RaibFlee
@description:
6.编写一个函数，把double 类型数组中的数据倒序排列，并在一个简单,
的程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>

void sort(double [], int);

int main() {
	system("chcp 65001");
	double x[5] = {1, 2, 6, 4, 5};
	sort(x,5);
	for (int i = 0; i < 5; ++i) {
		printf("%.2f ",x[i]);
	}

	return 0;
}

void sort(double ar[],int size){
	double temp;
	int i,j;
	for ( i = 0; i < size - 1; ++i) {
		for (j = 0; j < size-1-i; ++j) {
			if (ar[j]<ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}
