/*
@filename:10-2.c
@Author:RaibFlee
@description:
2.编写一个程序，初始化一个double类型的数组，然后把该数组的内容
拷贝至3个其他数组中(在mainO中声明这4个数组)。使用带数组表示法的
函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。
把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。第3
个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指
针。也就是说，给定以下声明，则函数调用如下所示:
double
source[5] = {1.1， 2.2,3.3，4.4, 5.5};
double targetI[5];
double target2[5];
double target3[5];
copy_ arr( targetl, source,5);
copy_ ptr( taiget2,source, 5);
copy_ ptrs(target3, source, source + 5);
*/


#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void copy_arr(double [], double [],int size);
void copy_ptr(double *, double *,int size);
void copy_ptrs(double [], double [], double *);
int main() {
	system("chcp 65001");
	double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];
	copy_arr(target1,source,SIZE);
	copy_ptr(target2,source,SIZE);
	copy_ptrs(target3,source,source+SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%.2f ",target1[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%.2f ",target2[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%.2f ",target3[i]);
	}
	printf("\n");
		return 0;
}

void copy_arr(double t[], double s[],int size)
{
	for (int i = 0; i < size; ++i) {
		t[i]=s[i];
	}
}
void copy_ptr(double *t, double *s,int size){
	for (int i = 0; i < size; ++i) {
		*t=*s;
		t++;
		s++;
	}
}
void copy_ptrs(double t[], double s[], double *end){
	for (int i = 0; i < end-s; ++i) {
		t[i]=s[i];
	}
}
