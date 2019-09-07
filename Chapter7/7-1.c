/*
@filename:7-1.c
@Author:RaibFlee
@description:
1.编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
换行符数和所有其他字符的数量。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int space,enter,other;
	space=enter=other=0;
	char input;
	printf("enter a string:");
	while ((input=getchar())!='#')
	{
		if (input==' ')
			space++;
		else if (input=='\n')
			enter++;
		else
			other++;
	}
	printf("space:%d enter:%d other:%d\n",space,enter,other);
	return 0;
}
