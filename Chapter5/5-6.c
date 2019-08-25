/*
@filename:5-6.c
@Author:RaibFlee
@description:
6.修改编程练习5的程序，使其能计算整数的平方和(可以认为第1天赚
$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错)。C没有平方函;
数，但是可以用n * n来表示n的平方。
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
		sum=sum+i*i;
		i++;
	}
	printf("the squre sum of (1 to %d) is %d",x,sum);
	return 0;
}
