/*
@filename:5-1.c
@Author:RaibFlee
@description:
1编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
间。使用#define或const创建一个 表示60的符号常量或const变量。通过while
循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
*/

#include <stdio.h>
#include <stdlib.h>
#define HOUR_TO_MINUTE 60
int main() {
	system("chcp 65001");
	printf("Enter minutes:");
	int minute;
	scanf("%d",&minute);
	while(minute>0)
	{
		printf("%d minutes equal %d hours %d minutes\n",minute,minute/HOUR_TO_MINUTE,minute%HOUR_TO_MINUTE);
		scanf("%d",&minute);
	}
	printf("Done");
	return 0;
}
