/*
@filename:9-7.c
@Author:RaibFlee
@description:
7.编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要
报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位
置。例如，c和C在字母表中的位置都是3。合并一个函数，以一个字符作为
参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isletter(char);

int main() {
	system("chcp 65001");
	char ch;
	int pos;
	printf("enter a char:");
	while ((ch=getchar())!=EOF) {
		while (getchar()!='\n')
			;
		pos=isletter(ch);
		if (pos!=-1)
			printf("%c is a letter,positon is %d\n",ch,pos);
		else
			printf("%c is not a letter\n",ch);
		printf("enter a char:");
	}
		return 0;
}

int isletter(char ch){
if (isalpha(ch))
	return tolower(ch)-'a'+1;
else
	return -1;
}
