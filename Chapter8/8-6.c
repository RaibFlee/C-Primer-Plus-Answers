/*
@filename:8-6.c
@Author:RaibFlee
@description:
6.修改程序清单8.8中的get first()函数， 让该函数返回读取的第1个非空
白字符，并在一个简单的程序中测试。
char get_first(void)
{
int ch;
ch = getchar();
while (getchar()!= '\n')
continue;
return ch;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char get_first(void);
int main() {
	system("chcp 65001");
	printf("%c\n",get_first());
	printf("done\n");
	return 0;
}
char get_first(void)
{
	int ch;
	do
	ch = getchar();
	while (isspace(ch));
	while (getchar()!= '\n')
		continue;
	return ch;
}
