/*
@filename:4-1.c
@Author:RaibFlee
@description:
1编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	printf("请输入名和姓：");
	char surname[10],given_name[10];
	scanf("%s%s",given_name,surname);
	printf("%s,%s",given_name,surname);
	return 0;
}
