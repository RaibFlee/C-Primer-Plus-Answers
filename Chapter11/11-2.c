/*
@filename:11-1.c
@Author:RaibFlee
@description:
1.设计并测试一一个函数，从输入中获取n个字符(包括空白、制表
符、换行符)，把结果储存在一个数组里，它的地址被传递作为-一个参数。
2.修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、
制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define L 10
char * getnchar(char [],int );
int main() {
	system("chcp 65001");
	char x[10];
	if (getnchar(x,L-1))
		puts(x);
	else
		puts("NULL");
	puts("Done");
	getchar();
	return 0;
}

char * getnchar(char x[],int n){
	char ch;
	for (int i = 0; i < n; ++i) {
		ch=getchar();
		if (ch==EOF){
			return NULL;
		} else if (isspace(ch))
			break;
		else{
			x[i]=ch;
		}
	}
	x[n]='\0';
	return x;
}
