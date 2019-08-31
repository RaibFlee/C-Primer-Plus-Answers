/*
@filename:6-9.c
@Author:RaibFlee
@description:
9.修改练习8，使用一个函数返回计算的结果。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double f(double x, double y);
int main() {
	system("chcp 65001");
	double x,y;
	printf("Enter two floating points(q to quit)");
	while (scanf("%lf %lf",&x,&y)==2)
	{
		printf("%f\n",f(x,y));
		printf("Enter two floating points(q to quit)");
	}

	return 0;
}
double f(double x, double y)
{
	return (x-y)/(x*y);
}
