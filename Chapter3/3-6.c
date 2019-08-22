/*
@filename:3-6.c
@Author:RaibFlee
@description:
6.1个水分子的质量约为3.0x10-23克。1夸脱水大约是950克。编写-一个
程序，提示用户输入水的夸脱数，并显示水分子的数量。.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	printf("输入水的夸脱数:");
	float i;
	scanf("%f",&i);
	printf("水分子数量:%e",i*950/3.0e-23);
	return 0;
}
