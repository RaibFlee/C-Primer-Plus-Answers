/*
@filename:7-10.c
@Author:RaibFlee
@description:
10.1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类
别，每个类别有两个等级。
下面是该税收计划的摘要(美元数为应征税的收入):
类别
税金
单身
17850美元按15%计，超出部分按28%计
户主
23900美元按15%计，超出部分按28%计
已婚，共有
29750美元按15%计，超出部分按28%计
已婚，离异
14875美元按15%计，超出部分按28%计
例如，-.位工资为20000美元的单身纳税人，应缴纳税费
0.15x 17850+0.28* (20000-17850) 美元。编写一个程序，让用户指定缴纳
税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次
输入。
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	system("chcp 65001");
	int tax_type;
	float pay,tax;
	do
	{
		printf("1)单身 2)户主 3)已婚，共有 4)已婚，离异 5)退出\n");
		printf("enter your tax type:");
		scanf("%d",&tax_type);
		if (tax_type==5)
			break;
		printf("your pay:");
		scanf("%f",&pay);
		switch (tax_type)
		{
			case 1:tax=pay<=17850?pay*0.15:17850*0.15+(pay-17850)*0.28;
				break;
			case 2:tax=pay<=23900?pay*0.15:23900*0.15+(pay-23900)*0.28;
				break;
			case 3:tax=pay<=29750?pay*0.15:29750*0.15+(pay-29750)*0.28;
				break;
			case 4:tax=pay<=14875?pay*0.15:14875*0.15+(pay-14875)*0.28;
				break;
			default:printf("enter again:\n");
				continue;
		}
		printf("your tax:%.2f\n",tax);
	}while (1);
	printf("done");
	return 0;
}
