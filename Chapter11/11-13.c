/*
@filename:11-13.c
@Author:RaibFlee
@description:
13.编写-一个程序，反序显示命令行参数的单词。例如，命令行参数是
see you later，该程序应打印later you see。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *args[]) {
	system("chcp 65001");
	for (int i = argc-1; i > 0; --i) {
		printf("%s ",args[i]);
	}
	puts("\nDone");
	return 0;
}

