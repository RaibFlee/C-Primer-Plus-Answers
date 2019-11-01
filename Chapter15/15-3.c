/*
@filename:15-3.c
@Author:RaibFlee
@description:
3.编写一个函数，接受一个int 类型的参数，并返回该参数中打开位的
数量。在一个程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>
int openbits(int);
int main(int argc,char *args[]) {
	system("chcp 65001");
	int x;
	printf("Enter a integer: ");
	while (scanf("%d",&x)==1){
		printf("%d openbits are %d\n",x,openbits(x));
		printf("Enter a integer: ");
	}
	return 0;
}
int openbits(int x){
	int count=0;
	for (int i = 0; i < 8 * sizeof(int); ++i,x>>=1) {
		if ((x&0x1)==1)
			count++;
	}
	return count;
}
