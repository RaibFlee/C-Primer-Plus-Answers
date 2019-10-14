/*
@filename:11-15.c
@Author:RaibFlee
@description:
15.使用字符分类函数实现atoi(函数。如果输入的字符串不是纯数字，
该函数返回0。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int strtoi(char *);
int main(int argc,char *args[]) {
	system("chcp 65001");
	int x=strtoi(args[1]);
	if (x)
		printf("%d\n",x);
	else
		puts("not a number");
	puts("Done");
	return 0;
}

int strtoi(char *s){
	int len=strlen(s)-1;
	int x=0;
	for (int i = len; i>=0; --i) {
		if (isdigit(*s))
			x=x+(*s-'0')*pow(10,i);
		else
			return 0;
		s++;
	}
	return x;
}
