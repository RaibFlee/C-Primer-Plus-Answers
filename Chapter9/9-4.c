/*
@filename:9-4.c
@Author:RaibFlee
@description:
4.两数的调和平均数这样计算:先得到两数的倒数，然后计算两个倒数
的平均值，最后取计算结果的倒数。编写-一个函数，接受两个double类型的
参数，返回这两个参数的调和平均数。
*/


#include <stdio.h>
#include <stdlib.h>
double ava(double, double);
int main() {
	system("chcp 65001");
	printf("enter tow number:");
	double x,y;
	while (scanf("%lf%lf",&x,&y)==2)
	{
		printf("ava(%.2f,%.2f)=%.2f\n",x,y,ava(x,y));
		printf("enter tow number:");
	}
	return 0;
}
double ava(double x, double y){
double x_y=(1/x+1/y)/2;
	return 1/x_y;
}
