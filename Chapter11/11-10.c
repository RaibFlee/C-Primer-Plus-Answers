/*
@filename:11-10.c
@Author:RaibFlee
@description:
10.编写一个函数接受一个字符串作为参数，并删除字符串中的空格。
在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
该程序应该应用该函数只每个输入的字符串，并显示处理后的字符串。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 50

void  str_strip(char *);
int main() {
	system("chcp 65001");
	char x[L];
	puts("Enter string ");
	while (fgets(x,L,stdin)&&x[0]!='\n'){
		str_strip(x);
		printf("striped string:\"%s\"\n",x);
		puts("Enter string,blank line to quit");
	}
	puts("Done");
	return 0;
}

void  str_strip(char *s){
	char x[L];
	int i,j;
	i=j=0;
	while (s[i]!='\0'){
		if (s[i]!=' '&&s[i]!='\n') {
			x[j] = s[i];
			j++;
		}
		i++;
	}
	x[j]='\0';
	strcpy(s,x);
}
