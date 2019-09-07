/*
@filename:7-7.c
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
*/

#include <stdio.h>
#include <stdlib.h>
#define base_pay 1000
#define pay_overtime 1.5
#define overtime 40
#define tax_300 0.15
#define tax_300_450 0.2
#define tax_450 0.25
int main() {
	system("chcp 65001");
	printf("enter hours of work a week:");
	float hours,total_pay,tax,net_income;
	scanf("%f",&hours);
	if (hours<=40)
	{
		total_pay=base_pay*hours;
		if (total_pay<=300)
			tax=total_pay*tax_300;
		else if (total_pay<=450)
			tax=300*tax_300+(total_pay-300)*tax_300_450;
		else
			tax=300*tax_300+150*tax_300_450+(total_pay-450)*tax_450;
	}
	else
	{
		total_pay=overtime*base_pay+(hours-overtime)*base_pay*pay_overtime;
		tax=300*tax_300+150*tax_300_450+(total_pay-450)*tax_450;
	}
	net_income=total_pay-tax;
	printf("total pay:%.2f tax:%.2f net income:%.2f",total_pay,tax,net_income);
	return 0;
}
