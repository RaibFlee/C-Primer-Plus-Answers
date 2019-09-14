/*
@filename:8-1.c
@Author:RaibFlee
@description:
1.设计一个程序，统计在读到文件结尾之前读取的字符数。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int count=0;
	while (getchar()!=EOF)
	{
		count++;
	}
	printf("count character number %d\n",count);
	return 0;
}
