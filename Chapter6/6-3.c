/*
@filename:6-3.c
@Author:RaibFlee
@description:
3.使用嵌套循环，按下面的格式打印字母:
F
FE
FED
FEDC
FEDCB
FEDCBA
注意:如果你的系统不使用ASCII或其他以数字顺序编码的代码，可以
把字符数组初始化为字母表中的字母:
char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
然后用数组下标选择单独的字母，例如lets[0]是‘A"'， 等等。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int i,j;
	char x;
	for(i=1;i<7;i++)
	{
		for(j=1, x='F';j<=i;j++,x--)
		{
			printf("%c",x);
		}
		printf("\n");
	}
	return 0;
}
