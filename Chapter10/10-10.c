/*
@filename:10-10.c
@Author:RaibFlee
@description:
10.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存
到第3个数组中。也就是说，如果数组1中包含的值是2、4、5、8，数组2中
包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。函数接
受3个数组名和一个数组大小。在一个简单的程序中测试该函数。.
*/


#include <stdio.h>
#include <stdlib.h>
void add(double [], double[], double [],int);
void show(double [], int);
int main() {
	system("chcp 65001");
	double x1[3]={1,2,3};
	double x2[3]={4,5,6};
	double x3[3];
	printf("x1:");
	show(x1,3);
	printf("x2:");
	show(x2,3);
	add(x1,x2,x3,3);
	printf("x3:");
	show(x3,3);
	return 0;
}

void add(double ar1[], double ar2[], double ar3[],int size){
	for (int i = 0; i < size; ++i) {
		ar3[i]=ar1[i]+ar2[i];
	}
}
void show(double ar[],int size){
	for (int i = 0; i <size; ++i) {
		printf("%.2f,",ar[i]);
	}
	printf("\n");
}
