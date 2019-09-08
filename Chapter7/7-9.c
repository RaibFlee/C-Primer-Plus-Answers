/*
@filename:7-9.c
@Author:RaibFlee
@description:
9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的
素数。
质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数。
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	system("chcp 65001");
	 bool isprime;
	printf("enter a positive integer:");
	int x,i,j;
	scanf("%d",&x);
	if (x>0)
	{
		for (i=2; i<=x ; ++i) {
			for (j = 2,isprime=true; j*j <=i ; ++j)
				if (i%j==0)
					isprime=false;
			if (isprime)
				printf("%d ",i);
		}
	}
	printf("done");
	return 0;
}
