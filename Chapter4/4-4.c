/*
@filename:4-4.c
@Author:RaibFlee
@description:
4.编写一个程序，提示用户输入身高(单位:英寸)和姓名，然后以下面的格式显示用户刚输入的信息:
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	printf("Enter height(cm) and name：");
	float height;
	char name[20];
	scanf("%f %s",&height,name);
	printf("%s,you are %fm tall",name,height/100);
	return 0;
}
