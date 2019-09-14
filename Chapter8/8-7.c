/*
@filename:8-7.c
@Author:RaibFlee
@description:
7.修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5
作为结束输入的标记。
 修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使
用switch完成I资等级选择。运行程序后，显示的菜单应该类似这样:
*****************************************************************
Enter the number corresponding to the desired pay rate oI action:
1) $8.75/hr
2) $9.33/hr
3) $10.00/hr
4) $11.20/hr
5) quit
*****************************************************************
如果选择1~4其中的一一个数字，程序应该询问用户工作的小时数。程
序要通过循环运行，除非用户输入5。如果输入1~5以外的数字，程序应
提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。使用#define
创建符号常量表示各工资等级和税率。

*/


#include <stdio.h>
#include <stdlib.h>
#define base_pay1 8.75
#define base_pay2 9.33
#define base_pay3 10.00
#define base_pay4 11.20
#define pay_overtime 1.5
#define overtime 40
#define tax_300 0.15
#define tax_300_450 0.2
#define tax_450 0.25
int main() {
	system("chcp 65001");
	printf("choose your pay:\n");
	printf("a)$%.2f/hr      b)%.2f/hr\n"
		   "c)$%.2f/hr      d)%.2f/hr\n"
		   "q)quit\n",base_pay1,base_pay2,base_pay3,base_pay4);
	char option;
	float pay,total_pay,tax,net_income,hours;
	while (scanf(" %c",&option)==1)
	{
		switch (option)
		{
			case 'a':pay=base_pay1;
				break;
			case 'b':pay=base_pay2;
				break;
			case 'c':pay=base_pay3;
				break;
			case 'd':pay=base_pay4;
				break;
			case 'q':
				goto done;
			default:	printf("choose correctly your pay:\n");
				goto options;
		}
		printf("enter hours of work a week:");
		scanf("%f",&hours);
		if (hours<=40)
			total_pay=pay*hours;
		else
			total_pay=overtime*pay+(hours-overtime)*pay*pay_overtime;
		if (total_pay<=300)
			tax=total_pay*tax_300;
		else if (total_pay<=450)
			tax=300*tax_300+(total_pay-300)*tax_300_450;
		else
			tax=300*tax_300+150*tax_300_450+(total_pay-450)*tax_450;
		net_income=total_pay-tax;
		printf("total pay:%.2f tax:%.2f net income:%.2f\n",total_pay,tax,net_income);
		printf("choose your pay:\n");
		options:	printf("a)$%.2f/hr      b)%.2f/hr\n"
						   "c)$%.2f/hr      d)%.2f/hr\n"
						   "q)quit\n",base_pay1,base_pay2,base_pay3,base_pay4);
	}
	done:printf("done");
	return 0;
}
