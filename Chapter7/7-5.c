/*
@filename:7-5.c
@Author:RaibFlee
@description:
4.:使用if else语句编写- -个程序读取输入，读到#停止。用感叹号替换句
号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
5.使用switch重写练习4。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int number=0;
	char x;
	printf("enter a string:");
	while ((x=getchar())!='#') {
		switch (x) {
			case '.':
				printf("!");
				number++;
				break;
			case '!':
				printf("!!");
				number++;
				break;
			default:
				printf("%c", x);
		}
	}
		printf("%d substitutions",number);
	return 0;
}
