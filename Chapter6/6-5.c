/*
@filename:6-5.c
@Author:RaibFlee
@description:
5.编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔
型的格式打印字母:
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是
在用户输入E后的打印结果。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	char x,y,z;
	printf("Enter a letter:");
	x=getchar();
	for(y='A';y<=x;y++)
	{
		for(z='A';z<=y;z++)
		{
			printf("%c",z);
		}
		for (z-=2;z>='A';z--)
		{
			printf("%c",z);
		}
		printf("\n");
	}
	return 0;
}
