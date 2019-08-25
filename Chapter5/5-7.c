/*
@filename:5-7.c
@Author:RaibFlee
@description:
7.编写- -个程序，提示用户输入一个double类型的数，并打印该数的立
方值。自己设计一个函数计算并打印立方值。main()函 数要把用户输入的值
传递给该函数。
*/

#include <stdio.h>
#include <stdlib.h>
void f_cube(double x);
int main() {
	system("chcp 65001");
	printf("Enter a  double number :");
	double x;
	scanf("%lf",&x);
	f_cube(x);
	return 0;
}

void f_cube(double x)
{
	printf("the cube of %f is %f",x,x*x*x);
}
