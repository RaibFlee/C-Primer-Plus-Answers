/*
@filename:13-8.c
@Author:RaibFlee
@description:
8.编写一个程序，以一个字符和任意文件名作为命令行参数。如果字符
后面没有参数，该程序读取标准输入;否则，程序依次打开每个文件并报告
每个文件中该字符出现的次数。文件名和字符本身也要一-同报告。程序应包
含错误检查，以确定参数数量是否正确和是否能打开文件。如果无法打开文
件，程序应报告这一情况，然后继续处理下一个文件。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *args[]) {
	system("chcp 65001");
	FILE *f;
	int ch;
	int count=0;
	if (argc==1){
		printf("Usage: %s char file",args[0]);
		exit(EXIT_FAILURE);
	} else if (argc==2){
		printf("default stdin\n");
		puts("Enter your content");
		while ((ch=getchar())!=EOF){
			if (ch==args[1][0])
				count++;
		}
		printf("%c in stdin occurs %d times\n",args[1][0],count);
	} else{
		for (int i = 2; i < argc; ++i) {
			count=0;
			if ((f=fopen(args[i],"r"))==NULL){
				printf("can't open %s\n",args[i]);
				continue;
			}
			while ((ch=getc(f))!=EOF){
				if (ch==args[1][0])
					count++;
			}
			printf("%c in %s occurs %d times\n",args[1][0],args[i],count);
		}
	}
	return 0;
}
