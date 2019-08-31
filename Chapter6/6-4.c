/*
@filename:6-4.c
@Author:RaibFlee
@description:
4.使用嵌套循环，按下面的格式打印字母:
A
BC
DEF
GHIJ
KLMNO
PQRSTU
如果你的系统不使用以数字顺序编码的代码，请参照练习3的方案解
决。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int i,j;
	char x;
	for(i=1,x='A';i<7;i++)
	{
		for(j=1;j<=i;j++,x++)
		{
			printf("%c",x);
		}
		printf("\n");
	}
	return 0;
}
