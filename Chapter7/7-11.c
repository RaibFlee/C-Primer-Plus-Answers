/*
@filename:7-11.c
@Author:RaibFlee
@description:
11.ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15
美元/磅，胡萝卜售价为1.09美元/磅。 在添加运费之前，100美 元的订单有
5%的打折优惠。少于或等于5磅的订单收取6.5美元的运费和包装费，5磅~
20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上
每续重1磅增加0.5美元。编写一个程序，在循环中用switch语句实现用户输
入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b
是甜菜的磅数，c是胡萝卜的磅数，q
是退出订购。程序要记录累计的重
量。即，如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅
的甜菜。然后，该程序要计算货物总价、折扣(如果有的话)、运费和包装
费。随后，程序应显示所有的购买信息:物品售价、订购的重量(单位:
磅)、订购的蔬菜费用、订单的总费用、折扣(如果有的话)、运费和包装
费，以及所有的费用总额。
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	system("chcp 65001");
	char type;
	float artichoke,beet,carrot,single;
	artichoke=beet=carrot=0;
	float freight,discount,weight,food_fee;
	while (1)
	{
		printf("enter the letter of your food:\n");
		printf("a) 洋蓟 b) 甜菜 c) 胡萝卜 q) 退出 f)确定订单\n");
		type=getchar();
		switch (type)
		{
			case 'a':printf("输入洋蓟的磅数：");
				scanf("%f",&single);
				artichoke+=single;
				break;
			case 'b':printf("输入甜菜的磅数：");
				scanf("%f",&single);
				beet+=single;
				break;
			case 'c':printf("输入胡萝卜的磅数：");
				scanf("%f",&single);
				carrot+=single;
				break;
			case 'q':
				goto done;
			case 'f':
				goto confirm;
			default:
				continue;
		}
	}
	confirm:weight=artichoke+beet+carrot;
	food_fee=artichoke*2.05+beet*1.15+carrot*1.09;
	if (weight<=5)
		freight=6.5;
	else if (weight<=20)
		freight=14;
	else
		freight=14+(weight-20)*0.5;

	if (food_fee>=100)
		discount=food_fee*0.05;
	else
		discount=0;
	printf("订单详情：\n");
	printf("洋蓟 2.05美元/磅 %.2f磅 %.2f美元\n",artichoke,artichoke*2.05);
	printf("甜菜 1.15美元/磅 %.2f磅 %.2f美元\n",beet,beet*1.15);
	printf("胡萝卜 1.09美元/磅 %.2f磅 %.2f美元\n",carrot,carrot*1.09);
	printf("蔬菜总费用：%.2f美元 总重:%.2f磅 运费:%.2f美元 折扣:%.2f美元\n",food_fee,weight,freight,discount);
	printf("总费用费:%.2f\n",food_fee+freight-discount);
	done:printf("done");
	return 0;
}
