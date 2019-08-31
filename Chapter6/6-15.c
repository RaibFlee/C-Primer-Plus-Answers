/*
@filename:6-15.c
@Author:RaibFlee
@description:
15.编写一一个程序，读取一.行输入，然后把输入的内容倒序打印出来。
可以把输入储存在char类型的数组中，假设每行字符不超过255。回忆一-
下，根据%c转换说明，scanf()函数 一次只能从输入中读取一个字符，而且
在用户按FEnter键时scanf()函数会生成- -一个换行字符(\n)
。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	char x;
	char statement[255];
	int i=0;
	printf("enter a character:");
	do
	{
		scanf("%c",&x);
		statement[i]=x;
		i++;
	}
	while (x!='\n');
	for(i-=2;i>=0;i--)
	{
		printf("%c",statement[i]);
	}
	printf("\nFinished");
	getchar();
	return 0;
}
