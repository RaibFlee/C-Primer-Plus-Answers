/*
@filename:13-10.c
@Author:RaibFlee
@description:
10.编写一一个程序打开一个文本文件，通过交互方式获得文件名。通过
一个循环，提示用户输入一个文件位置。然后该程序打印从该位置开始到下
一个换行符之前的内容。用户输入负数或非数值字符可以结束输入循环。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main() {
	system("chcp 65001");
	FILE *fp;
	int ch;
	char name[20];
	printf("Enter filename: ");
	scanf("%s",name);
	if ((fp=fopen(name,"r"))==NULL){
		printf("can't open %s",name);
		exit(EXIT_FAILURE);
	}
	int pos;
	printf("Enter a file postion(an positive integer): ");
	while (scanf("%d",&pos)==1&&pos>=0){
		fseek(fp,pos,SEEK_SET);
		putchar(getc(fp));
		while ((ch=getc(fp))!='\n')
			putchar(ch);
		putchar('\n');
		printf("Enter a file postion(an positive integer,negative or char to quit): ");
	}
	puts("Done");
	return 0;
}
