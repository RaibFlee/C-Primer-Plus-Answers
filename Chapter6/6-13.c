/*
@filename:6-13.c
@Author:RaibFlee
@description:
13.编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元
素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环 显
示数组元素的值。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	int i[8];
	int j,value;
	for(j=0,value=1;j<8;j++)
	{
		i[j]=value;
		value*=2;
	}
	j=0;
	do
	{
		printf("%d ",i[j]);
		j++;
	}
	while (j<8);
	printf("Finished");
	return 0;
}
