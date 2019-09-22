/*
@filename:9-2.c
@Author:RaibFlee
@description:
2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱
动程序中测试该函数。
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
	for (int k = 0; k < j; ++k) {
		for (int l = 0; l < i; ++l) {
			printf("%c",ch);
		}
		printf("\n");
	}
}
