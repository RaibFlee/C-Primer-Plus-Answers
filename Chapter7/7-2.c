/*
@filename:7-2.c
@Author:RaibFlee
@description:
2.编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字
符以及对应的ASCI码(十进制)。一行打印8个字符。建议:使用字符计数
和求模运算符(%)在每8个循环周期时打印一个换行符。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	char input;
	int cunt=0;
	printf("enter a string:");
	while ((input=getchar())!='#')
	{
		printf("%c",input);
		cunt++;
		if(cunt==8)
		{
			printf("\n");
			cunt=0;
		}
	}
	printf("done");
	return 0;
}
