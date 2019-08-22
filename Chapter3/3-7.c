/*
@filename:3-7.c
@Author:RaibFlee
@description:
7.1英寸相当于2.54厘米。编写一一个程序，提示用户输入身高(/英
寸)，然后以厘米为单位显示身高。
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	printf("Enter your height in inches:");
	float i;
	scanf("%f",&i);
	printf("your height %f cm",i*2.54);
	return 0;
}
