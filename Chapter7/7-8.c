/*
@filename:7-8.c
@Author:RaibFlee
@description:
7.编写一个程序，提示用户输入一-周工作的小时数，然后打印工资总
额、税金和净收入。做如下假设:
a.基本工资= 1000美元/小时
b.加班(超过40小时) = 1.5倍的时间
c.税率:前300美 元为15% .
续150美元为20%
余下的为25%
用#define定义符号常量。不用在意是否符合当前的税法。
8.修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使
用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr
2) $9.33/hr
3) $10.00/hr
4) $11.20/hr
5) quit
*****************************************************************
如果选择1~4其中的一个数字，程序应该询问用户工作的小时数。程
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
	printf("1)$%.2f/hr      2)%.2f/hr\n"
		   "3)$%.2f/hr      4)%.2f/hr\n"
		   "5)quit\n",base_pay1,base_pay2,base_pay3,base_pay4);
	int option;
	float pay,total_pay,tax,net_income,hours;
	while (scanf("%d",&option)==1)
	{
		switch (option)
		{
			case 1:pay=base_pay1;
				break;
			case 2:pay=base_pay2;
				break;
			case 3:pay=base_pay3;
				break;
			case 4:pay=base_pay4;
				break;
			case 5:
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
		options:	printf("1)$%.2f/hr      2)%.2f/hr\n"
			   "3)$%.2f/hr      4)%.2f/hr\n"
			   "5)quit\n",base_pay1,base_pay2,base_pay3,base_pay4);
	}
	done:printf("done");
	return 0;
}
