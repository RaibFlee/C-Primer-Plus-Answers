/*
@filename:6-14.c
@Author:RaibFlee
@description:
14.编写一个程序，创建两个包含8个元素的double类型数组，使用循环:
提示用户为第一一个数组输入8个值。第二个数组元素的值设置为第一- 个数组
对应元素的累积之和。例如，第二个数组的第4个元素的值是第一个数组前
4个元素之和，第二个数组的第5个元素的值是第-一个数组前5个元素之和
(用嵌套循环可以完成，但是利用第二个数组的第5个元素是第二个数组的
第4个元素与第一个数组的第5个元素之和，只用一个循环就能完成任务，不
需要使用嵌套循环)。最后，使用循环显示两个数组的内容，第一个数组显
示成一行，第二个数组显示在第-一个数组的下一行，而且每个元素都与第- -
个数组各元素相对应。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	double x[8],y[8],product,j;
	int i;
	for(i=0,product=0;i<8;i++)
	{
		printf("enter a number:");
		scanf("%lf",&j);
		product+=j;
		x[i]=j;
		y[i]=product;
	}
	for(i=0;i<8;i++)
	{
		printf("%f ",x[i]);
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
		printf("%f ",y[i]);
	}
	printf("Finished");
	return 0;
}
