/*
@filename:3-5.c
@Author:RaibFlee
@description:
5.- -年大约有3.156x107秒。编写一个程序，提示用户输入年龄，然后显
示该年龄对应的秒数。
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	printf("Enter your age:");
	int i;
	scanf("%d",&i);
	printf("seconds:%f",i*3.156e7);
	return 0;
}
