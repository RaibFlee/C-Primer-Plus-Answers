/*
@filename:9-6.c
@Author:RaibFlee
@description:
6.编写并测试一一个函数，该函数以3个double变量的地址作为参数，把最
小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
*/


#include <stdio.h>
#include <stdlib.h>

void larger_of(double *, double *, double *);

int main() {
	system("chcp 65001");
	double x,y,z;
	printf("enter tow number:");
	while (scanf("%lf%lf%lf",&x,&y,&z)==3) {
		larger_of(&x, &y,&z);
		printf("enter tow number:");
	}
		return 0;
}

void larger_of(double *x, double *y, double *z) {
	printf("before x:%.2f,y:%.2f,z:%.2f\n", *x, *y,*z);
	double min,mid,max;
	min=mid=max=*x;
	if (min>*y)
		min=*y;
	if (min>*z)
		min=*z;
	if (max<*y)
		max=*y;
	if (max<*z)
		max=*z;
	mid=*x+*y+*z-min-max;
	*x=min;
	*y=mid;
	*z=max;
	printf("before x:%.2f,y:%.2f,z:%.2f\n", *x, *y,*z);
}
