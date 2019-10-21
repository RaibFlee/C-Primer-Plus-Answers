/*
@filename:13-11.c
@Author:RaibFlee
@description:
11编写一个程序，接受两个命令行参数。第1个参数是一一个字符串，第
2个参数是一个文件名。然后该程序查找该文件，打印文件中包含该字符串
的所有行。因为该任务是面向行而不是面向字符的，所以要使用fgets()而不
是getc()。使用标准C库函数strstr() (11.5.7节简要介绍过)在每一行中查找
指定字符串。假设文件中的所有行都不超过255个字符。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main(int argc, char *args[]) {
	system("chcp 65001");
	FILE *fp;
	if (argc!=3){
		printf("Usage %s str file",args[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp=fopen(args[2],"r"))==NULL){
		printf("can't open %s",args[0]);
		exit(EXIT_FAILURE);
	}
	char st[MAX];
	while (fgets(st,MAX,fp)){
		if (strstr(st,args[1]))
			fputs(st,stdout);
	}
	puts("Done");
	return 0;
}
