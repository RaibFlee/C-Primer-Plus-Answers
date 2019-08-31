/*
@filename:6-11.c
@Author:RaibFlee
@description:
 11编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	int x[8];
	for (int i = 0; i < 8; ++i) {
		printf("enter an integer:");
		scanf("%d",&x[i]);
	}
	for(int i=7;i>=0;i--)
	{
		printf("%d ",x[i]);
	}
	printf("\nFinished");
	return 0;
}
