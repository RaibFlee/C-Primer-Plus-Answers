/*
@filename:6-2.c
@Author:RaibFlee
@description:
2.使用嵌套循环，按下面的格式打印字符:
$
$$
$$$
$$$$
$$$$$
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
