/*
@filename:11-9.c
@Author:RaibFlee
@description:
9.编写一个函数，把字符串中的内容用其反序字符串代替。在一个完整
的程序中测试该函数，使用一个循环给函数提供输入值。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 10

char * string_reverse( const char *, char *);
int main() {
	system("chcp 65001");
	char x[L],x2[L];
	int n;
	char choice='y';
	while (choice=='y'){
		puts("Enter string ");
		scanf("%s",x);
		string_reverse(x,x2);
			printf("\"%s\" reverse to \"%s\"\n",x,x2);
		printf("Enter y to continue or n to quit:");
		scanf(" %c",&choice);
	}
	puts("Done");
	return 0;
}

char * string_reverse(const char *s, char *s2){
	int l = strlen(s)-1;
	for (int i = l; i >=0 ; --i) {
		s2[l-i]=s[i];
	}
	s2[l+1]='\0';
	return s2;
}
