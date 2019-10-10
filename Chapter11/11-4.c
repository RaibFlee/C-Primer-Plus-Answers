/*
@filename:11-4.c
@Author:RaibFlee
@description:
3.设计并测试-一个函数，从一行输入中把-一个单词读入一一个数组中，并
丢弃输入行中的其余字符。该函数应该跳过第1个非空白字符前面的所有空
白。将一个单词定义为没有空白、制表符或换行符的字符序列。
4.设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个
参数指明可读取的最大字符数。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define L 10
char * getword(char [],int );
int main() {
	system("chcp 65001");
	char x[10];
	while (getword(x,L-1))
		puts(x);
	puts("Done");
	return 0;
}

char * getword(char x[],int n){
	char ch;
	while (isspace(ch=getchar())&&ch!=EOF);
	if (ch==EOF)
		return NULL;
	int i;
	for ( i = 0; i < n; ++i) {
		if (ch==EOF){
			return NULL;
		} else if (isspace(ch))
			break;
		else{
			x[i]=ch;
		}
		ch=getchar();
	}
	x[i]='\0';
	while (ch!='\n'){
		if (ch==EOF)
			return NULL;
		ch=getchar();
	};
	return x;
}
