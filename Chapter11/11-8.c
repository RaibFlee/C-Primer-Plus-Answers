/*
@filename:11-8.c
@Author:RaibFlee
@description:
8.编写一个名为string_inO的函数，接受两个指向字符串的指针作为参
数。如果第2个字符串中包含第1个字符串，该函数将返回第1个字符串开始
854
的地址。例如，string_in( "hats", "at")将 返回hats中a的地址。否则，该函数返
回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入
值。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 10

char * string_in(char *,char *);
int main() {
	system("chcp 65001");
	char x[L],x2[L];
	int n;
	char choice='y';
	while (choice=='y'){
		puts("Enter two strings ");
		scanf("%s %s",x,x2);
		char *s=string_in(x,x2);
		if (s)
			printf("found \"%s\" in \"%s\" for index %td\n",x2,x,s-x);
		else
			printf("Not found\n");
		printf("Enter y to continue or n to quit:");
		scanf(" %c",&choice);
	}
	puts("Done");
	return 0;
}

char * string_in(char *s1,char *s2){
	for (int i = 0; i <=(strlen(s1)-strlen(s2)); ++i) {
		if (strncmp(s1+i,s2,strlen(s2))==0)
			return s1+i;
	}
	return NULL;
}
