/*
@filename:5-8.c
@Author:RaibFlee
@description:
8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为;
求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入
的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例
如下:
This program computes moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438%256is182
Enter next number for first operand (<= 0 to quit):1234567
1234567 % 256 is 135
Enter next mumber for first operand (<= 0 to quit): 0
Done
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	printf("Enter an integer to serve as the second operand: ");
	int first_operand,second_operand;
	scanf("%d",&second_operand);
	printf("Now enter the first operand: ");
	scanf("%d",&first_operand);
	while (first_operand>0)
	{
		printf("%d%%%d is %d\n",first_operand,second_operand,first_operand%second_operand);
		printf("Now enter the first operand: ");
		scanf("%d",&first_operand);
	}
	printf("Done");
	return 0;
}

