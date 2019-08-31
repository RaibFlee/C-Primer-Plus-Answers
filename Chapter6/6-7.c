/*
@filename:3-8.c
@Author:RaibFlee
@description:
7.编写一个程序把-一个单词读入一个字符数组中，然后倒序打印这个单
词。提示: strlen()函数(第4章介绍过)可用于计算数组最后一个字符的下
标。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	char word[20];
	scanf("%s",word);
	int i;
	for (i =strlen(word)-1 ; i>=0  ; --i) {
		printf("%c",word[i]);
	}
	printf("\n");
	return 0;
}
