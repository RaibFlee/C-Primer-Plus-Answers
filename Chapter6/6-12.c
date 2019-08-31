/*
@filename:3-8.c
@Author:RaibFlee
@description:
12.考虑下面两个无限序列:
1.0 +1.0/2.0 +1.0/3.0+1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ..
编写一个程序计算这两个无限序列的总和，直到到达某次数。提示:奇
数个-1相乘得-1， 偶数个-1相乘得1。让用户交互地输入指定的次数，当用
户输入0或负值时结束输入。查看运行100项、1000项、 10000项后的总和，
是否发现每个序列都收敛于某值?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	printf("enter times");
	int i,j;
	scanf("%d",&i);
	while (i>0)
	{
		double sum=0;
		double flag=1;
		for (j=1;j<=i;j++)
		{
			sum+=flag/j;
		}
		printf("the sum of 1.0 +1.0/2.0 +1.0/3.0+1.0/4.0 + ... is %f\n",sum);
		for (sum=0,j=1;j<=i;j++)
		{
			sum+=flag/j;
			flag=-flag;
		}
		printf("the sum of 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + .. %f\n",sum);
		printf("enter times");
		scanf("%d",&i);
	}
	printf("Finished");
	return 0;
}
