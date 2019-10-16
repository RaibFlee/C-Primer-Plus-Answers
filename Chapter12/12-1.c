/*
@filename:12-1.c
@Author:RaibFlee
@description:
1.不使用全局变量，重写程序清单12.4。
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//int units = 0;
///*外部变量*/
void critic(int *);

int main(int argc,char *args[]) {
	system("chcp 65001");
	 int units=0; /* 可选的重复声明*/
	printf( "How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units!= 56)
		critic(&units);
	printf("You must have looked it up!\n");
	puts("Done");
	return 0;
}
void critic(int *x)
{
/*删除了可选的重复声明*/
	printf("No luck, my friend. Try again\n");
	scanf("%d",x);
}

