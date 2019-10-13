/*
@filename:11-7.c
@Author:RaibFlee
@description:
7.stncpy(s1, s2, n)函数把s2中的n个字符拷贝至s1中，截断s2，或者有必
要的话在末尾添加空字符。如果s2的长度是n或多于n,目标字符串不能以空
字符结尾。该函数返回s1。自己编写一个这样的函数， 名为mystrncpy()。在
一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
*/


#include <stdio.h>
#include <stdlib.h>
#define L 10

char * mystrncpy(char *, const char *, int);
int main() {
	system("chcp 65001");
	char x[3],x2[L];
	int n;
	char choice='y';
	while (choice=='y'){
		puts("Enter string and the number of char to copy");
		scanf("%s %d",x2,&n);
		mystrncpy(x,x2,n);
		printf("copied string:%s\n",x);
		printf("Enter y to continue or n to quit:");
		scanf(" %c",&choice);
	}
	puts("Done");
	return 0;
}

char * mystrncpy(char *target,const char *src, int n){
	int i;
	for ( i = 0; i < n; ++i) {
		target[i]=src[i];
		if (src[i]=='\0')
			break;
	}
	target[i]='\0';
	return target;
}
