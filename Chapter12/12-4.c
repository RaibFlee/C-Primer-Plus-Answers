/*
@filename:12-4.c
@Author:RaibFlee
@description:
4.在一个循环中编写并测试一个函数，该函数返回它被调用的次数。
*/


#include <stdio.h>
#include <stdlib.h>
void f(void);
int times;
int main() {
	system("chcp 65001");
	int x;
	puts("Enter a integer(-1 to quit):");
	while (	scanf("%d",&x)==1&&x!=-1)
		f();
	printf("call f() %d times\n",times);
	printf("Done.\n");
	return 0;
}
void f(void){
	times++;
}
