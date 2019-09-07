/*
@filename:7-3.c
@Author:RaibFlee
@description:
3.编写一个程序，读取整数直到用户输入0。 输入结束后，程序应报告
用户输入的偶数(不包括0)个数、这些偶数的平均值、输入的奇数个数及
其奇数的平均值。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int even,even_sum,odd,odd_sum;
	even=even_sum=odd=odd_sum=0;
	int number=0;
	printf("enter a number of integers:");
	while (scanf("%d",&number)==1)
	{
		if (number==0)
			break;
		else if(number%2==0)
		{
			even++;
			even_sum+=number;
		}
		else{
			odd++;
			odd_sum+=number;
		}
	}
	printf("even:%d,even_mean:%.2f,odd:%d,odd_mean:%f",even,(
	float)even_sum/even,odd,(
	float)odd_sum/odd);
	return 0;
}
