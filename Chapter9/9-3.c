/*
@filename:9-3.c
@Author:RaibFlee
@description:
3.编写-一个函数，接受3个参数: - 一个字符和两个整数。字符参数是待
打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指
定字符的行数。编写一个调用该函数的程序。
*/


#include <stdio.h>
#include <stdlib.h>
void chline(char,int,int);
int main() {
	system("chcp 65001");
	chline('*',3,4);
	return 0;
}
void chline(char ch,int i,int j){
	for (int k = 0; k < i; ++k) {
		for (int l = 0; l < j; ++l) {
			printf("%c",ch);
		}
		printf("\n");
	}
}
