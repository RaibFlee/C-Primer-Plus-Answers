/*
@filename:9-5.c
@Author:RaibFlee
@description:
5.编写并测试一个函数larger_of(),该函数把两个double类型变量的值替
换为较大的值。例如，larger of(x, y) 会把x和y中较大的值重新赋给两个变
量。
*/


#include <stdio.h>
#include <stdlib.h>

void larger_of(double *, double *);

int main() {
	system("chcp 65001");
	double x,y;
	printf("enter tow number:");
	while (scanf("%lf%lf",&x,&y)==2) {
		larger_of(&x, &y);
		printf("enter tow number:");
	}
		return 0;
}

void larger_of(double *x, double *y) {
	printf("before x:%.2f,y:%.2f\n", *x, *y);
	if (*x > *y)
		*y = *x;
	else
		*x = *y;
	printf("after x:%.2f,y:%.2f\n", *x, *y);
}
