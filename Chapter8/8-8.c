/*
@filename:8-8.c
@Author:RaibFlee
@description:
8.编写一个程序，显示一一个提供加法、减法、乘法、除法的菜单。获得
用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的
操作。该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输
入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，如果用
户输入0作为第2个数(除数)，程序应提示用户重新输入一个新值。该程序
的一个运行示例如下:
*/


#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	float x1,x2;
	char ch;
	do
	{
		printf("enter the option of your choice:\n"
		 "a.add   s.subtract\n"
   "m.multiply   d.divide\n"
   "q.quit\n");
		scanf(" %c",&ch);
		if (ch=='q')
			break;
		do
		{
			while (getchar()!='\n')
				;
			printf("enter first number:");
		}while (scanf("%f",&x1)!=1);
		do
		{
			while (getchar()!='\n')
				;
			printf("enter second number:");
		}while (scanf("%f",&x2)!=1||(ch=='d'&&x2==0));
		switch (ch)
		{
			case 'a':printf("%f + %f = %f\n",x1,x2,x1+x2);
				break;
			case 's':printf("%f - %f = %f\n",x1,x2,x1-x2);
				break;
			case 'm':printf("%f * %f = %f\n",x1,x2,x1*x2);
				break;
			case 'd':printf("%f / %f = %f\n",x1,x2,x1/x2);
				break;
			default:
				continue;
		}
	}while (1);
	return 0;
}
