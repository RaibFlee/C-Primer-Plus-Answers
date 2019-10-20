/*
@filename:13-1.c
@Author:RaibFlee
@description:
1.修改程序清单13.1中的程序，要求提示用户输入文件名，并读取用户
输入的信息，不使用命令行参数。
*/


#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	int ch;
	FILE *fp;
	unsigned long count=0;
	printf("Enter filename: ");
	char name[15];
	scanf("%s",name);
	if ((fp=fopen(name,"r"))==NULL)
	{
		printf("can't open %s\n",name);
		exit(EXIT_FAILURE);
	}
	while ((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("\nFile %s has %lu characters\n",name,count);
	printf("Done.\n");
	return 0;
}

