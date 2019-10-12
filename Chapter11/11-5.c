/*
@filename:11-5.c
@Author:RaibFlee
@description:
5.设计并测试一一个函数，搜索第1个函数形参指定的字符串，在其中查
找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该
字符的指针，如果在字符串中未找到指定字符，则返回空指针(该函数的功
能与
strchr()函数相同)。在一个完整的程序中测试该函数，使用一一个循环
给函数提供输入值。
*/


#include <stdio.h>
#include <stdlib.h>
#define L 10
char * getchr(char *, char);
int main() {
	system("chcp 65001");
	char x[L];
	char ch;
	char choice='y';
	while (choice=='y'){
		puts("Enter your word and char");
		scanf("%s %c",x,&ch);
		char * x2=getchr(x,ch);
		if (x2)
			printf("find %c in %s for index %td\n",ch,x,x2-x);
		else
			puts("Not Found");
		printf("Enter y to continue or n to quit:");
		scanf(" %c",&choice);
	}
	puts("Done");
	return 0;
}

char * getchr(char * str, char x){
	while (*str!='\0'&&*str!=x)
		str++;
	if (*str=='\0')
		return NULL;
	else
		return str;
}
