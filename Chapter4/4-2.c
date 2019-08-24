/*
@filename:3-8.c
@Author:RaibFlee
@description:
2.编写一个程序，提示用户输入名和姓，并执行一下操作:
a.打印名和姓，包括双引号;
b.在宽度为20的字段右端打印名和姓，包括双引号;
c.在宽度为20的字段左端打印名和姓，包括双引号;
d.在比姓名宽度宽3的字段中打印名和姓。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	printf("请输入名和姓：");
	char surname[10],given_name[10];
	scanf("%s%s",given_name,surname);
	printf("\"%s %s\"\n",given_name,surname);
	printf("\"%*s %s\"\n",19-strlen(surname),given_name,surname);
	printf("\"%s %-*s\"\n",given_name,19-strlen(given_name),surname);
	printf("\"%*s %s\"",strlen(surname)+3,given_name,surname);
	return 0;
}
