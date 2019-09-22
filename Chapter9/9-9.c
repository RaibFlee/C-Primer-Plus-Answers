/*
@filename:9-9.c
@Author:RaibFlee
@description:
8.第6章的程序清单6.20中，power()函 数返回- .个double类型数的正整数
次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂
都为0，任何数的0次幂都为1(函数应报告0的0次幂未定义，因此把该值处
理为1)。要使用一个循环，并在程序中测试该函数。
9.使用递归函数重写编程练习8。
double power(double n, int p) // 函数定义
{
double pow = 1;
int i;
for (i = 1;i<= p; i++)
pow *= n;
retuin pow;
 }
//返回pow的值
*/


#include <stdio.h>
#include <stdlib.h>
double power(double n, int p);
int main() {
	system("chcp 65001");
	double n,pow;
	int p;
	printf("enter a number:");
	while (scanf("%lf%d",&n,&p)==2) {
		while (getchar()!='\n')
			;
		pow=power(n,p);
		printf("%.3g to the power %d is %.5g\n",n,p,pow);
		printf("enter a number:");
	}
		return 0;
}

double power(double n,int p){
	double pow=1;
	if (p==0)
	{
		if (n==0)
			printf("0的0次幂未定义，因此把该值处理为1\n");
		return pow;
	}
	if (n==0)
	{
		pow=0;
		return pow;
	}
	for (int i = 0; i < abs(p); ++i) {
		pow=n*power(n,abs(p)-1);
	}
	if (p<0)
		pow=1/pow;
	return pow;
}
