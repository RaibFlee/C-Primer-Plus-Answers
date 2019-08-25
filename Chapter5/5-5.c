/*
@filename:5-5.c
@Author:RaibFlee
@description:
5.修改程序addemup.c ( 程序清单5.13)，你可以认为addemup.c是计算20
天里赚多少钱的程序(假设第1天赚$1、第2天赚$2、第3天赚$3，以此类
推)。修改程序，使其可以与用户交互，根据用户输入的数进行计算(即，
用读入的一一个变量来代替20)。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	printf("Enter a number :");
	int x;
	int sum=0;
	int i=1;
	scanf("%d",&x);
	while(i<=x)
	{
		sum=sum+i++;
	}
	printf("the sum of (1 to %d) is %d",x,sum);
	return 0;
}
