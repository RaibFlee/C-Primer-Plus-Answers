/*
@filename:15-4.c
@Author:RaibFlee
@description:
4.编写一个程序，接受两个int类型的参数:一个是值;一个是位的位
如果指定位的位置为1，该函数返回1;否则返回0。在一个程序中测试
该函数。
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool bit_on(int, int);
int main(int argc,char *args[]) {
	system("chcp 65001");
	int x,pos;
	printf("Enter a integer and postion(begin with 0): ");
	while (scanf("%d%d",&x,&pos)==2){
		printf("positon %d of %d s %d\n",pos,x,bit_on(x,pos));
		printf("Enter a integer: ");
	}
	return 0;
}
bool bit_on(int val, int pos){
	bool bit=(val>>pos)&0x1;
	return bit;
}
