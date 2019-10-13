/*
@filename:11-6.c
@Author:RaibFlee
@description:
6.编写一个名为is_within(的函数，接受- - 个字符和- -个指向字符串的
指针作为两个函数形参。如果指定字符在字符串中，该函数返回一个非零值
(即为真)。否则，返回0 (即为假)。在一个完整的程序中测试该函数，
使用一个循环给函数提供输入值。
*/


#include <stdio.h>
#include <stdlib.h>
#define L 10

_Bool is_within(char *, char);
int main() {
	system("chcp 65001");
	char x[L];
	char ch;
	char choice='y';
	while (choice=='y'){
		puts("Enter your word and char");
		scanf("%s %c",x,&ch);
		if (is_within(x,ch))
			printf("find %c in %s\n",ch,x);
		else
			puts("Not Found");
		printf("Enter y to continue or n to quit:");
		scanf(" %c",&choice);
	}
	puts("Done");
	return 0;
}

_Bool is_within(char * str, char x){
	while (*str!='\0'&&*str!=x)
		str++;
	return *str;
}
