/*
@filename:6-17.c
@Author:RaibFlee
@description:
17.Chuckie Lucky赢得了100万美元(税后)，他把奖金存入年利率8%的
账户。在每年的最后一天，Chuckie取出10万美元。 编写一个程序，计算多
少年后Chuckie会取完账户的钱?
*/

#include <stdio.h>
#include <stdlib.h>
#define original 100
int main() {
	system("chcp 65001");
	double x;
	x=original;
	int i=1;
	do
	{
		x*=1.08;
		x-=10;
		i++;
	}while (x>0);
	printf("%d years",i);
	return 0;
}
