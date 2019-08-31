/*
@filename:6-8.c
@Author:RaibFlee
@description:
8.编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数
乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	double x,y;
	printf("Enter two floating points(q to quit)");
	while (scanf("%lf %lf",&x,&y)==2)
	{
		printf("%f\n",(x-y)/(x*y));
		printf("Enter two floating points(q to quit)");
	}

	return 0;
}
