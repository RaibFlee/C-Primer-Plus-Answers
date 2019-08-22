/*
@filename:3-4.c
@Author:RaibFlee
@description:
 4.编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指
 数形式。然后，如果系统支持，再打印成p记数法(即十六进制记数法)。
 按以下格式输出(实际显示的指数位数因系统而异) :
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	printf("Enter a floating-value:");
	float i;
	scanf("%f",&i);
	printf("fixed-pointed:%f\nexponential notation:%e\np notation:%a",i,i,i);
	return 0;
}
