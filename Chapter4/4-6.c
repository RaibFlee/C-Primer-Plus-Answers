/*
@filename:4-6.c
@Author:RaibFlee
@description:
6.编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一 行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示:
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示:
Melissa Honeybee
7       8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("chcp 65001");
	printf("Enter your given name and surname:");
	char given[20], sur[20];
	scanf("%s %s", given, sur);
	printf("%s %s\n"
		   "%*d%*d\n", given, sur, strlen(given), strlen(given), strlen(sur) + 1, strlen(sur));

	printf("%s %s\n"
		   "%d%*d", given, sur, strlen(given), strlen(given) + 1, strlen(sur));
	return 0;
}
