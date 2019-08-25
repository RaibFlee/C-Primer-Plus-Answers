/*
@filename:8-2.c
@Author:RaibFlee
@description:
2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
10的所有整数(例如，用户输入5，则打印5~ 15的所有整数，包括5和
15)。要求打印的各值之间用一个空格、制表符或换行符分开。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	printf("Enter an integer:");
	int x,y;
	scanf("%d",&x);
	y=x+10;
	while(x<=y)
	{
		printf("%d ",x++);
	}
	printf("Done");
	return 0;
}
