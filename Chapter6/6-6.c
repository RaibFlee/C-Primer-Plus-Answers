/*
@filename:6-6.c
@Author:RaibFlee
@description:
6.编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该
数的立方。要求用户输入表格的上下限。使用一个for循环。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	printf("Enter a number as the upper limit:");
	int upper,lower;
	scanf("%d",&upper);
	printf("Enter a number as the lower limit:");
	scanf("%d",&lower);
	printf("number square cube\n");
	int i;
	for (i=lower;i<=upper; ++i) {
		printf("%6d %6d %4d\n",i,i*i,i*i*i);
	}
	return 0;
}
