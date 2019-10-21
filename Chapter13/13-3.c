/*
@filename:13-3.c
@Author:RaibFlee
@description:
3.编写一个文件拷贝程序，提示用户输入文本文件名，并以该文件名作
为原始文件名和输出文件名。该程序要使用ctype.h 中的toupper(函数， 在
写入到输出文件时把所有文本转换成大写。使用标准I/O和文本模式。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *args[]) {
	system("chcp 65001");
	char name[20],name2[20];
	printf("Enter filename: ");
	scanf("%s",name);
	strcpy(name2,name);
	strcat(name2,"_copy");
	FILE *f1,*f2;//f1:source,f2:target
	if ((f1=fopen(name,"r"))==NULL){
		printf("can't open %s\n",name);
		exit(EXIT_FAILURE);
	}
	if ((f2=fopen(name2,"w"))==NULL){
		printf("can't create %s\n",name2);
		exit(EXIT_FAILURE);
	}
	int ch;
	while ((ch=getc(f1))!=EOF){
		putc(toupper(ch),f2);
	}
	fclose(f1);
	fclose(f2);
	printf("Done.\n");
	return 0;
}

