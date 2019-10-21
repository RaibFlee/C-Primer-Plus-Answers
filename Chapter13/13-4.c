/*
@filename:13-4.c
@Author:RaibFlee
@description:
4.编写一个程序，按顺序在屏幕上显示命令行中列出的所有文件。使用
argc控制循环。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *args[]) {
	system("chcp 65001");
	if (argc==1){
		printf("Usage:%s file1 file2......",args[0]);
	}
	FILE *f1;
	int ch;
	for (int i = 1; i < argc; ++i) {
		if ((f1=fopen(args[i],"r"))==NULL){
			printf("can't open %s\n",args[i]);
			exit(EXIT_FAILURE);
		}
		while ((ch=getc(f1))!=EOF)
			putchar(ch);
		fclose(f1);
	}
	printf("Done.\n");
	return 0;
}

