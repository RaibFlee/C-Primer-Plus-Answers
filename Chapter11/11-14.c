/*
@filename:11-14.c
@Author:RaibFlee
@description:
14.编写一个通过命令行运行的程序计算幂。第1个命令行参数是double
类型的数，作为幂的底数，第2个参数是整数，作为幂的指数。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *args[]) {
	system("chcp 65001");
	double mul=1;
	char *end;
	double base=strtod(args[1],&end);
	int exp=atoi(args[2]);
	for (int i = 0; i<exp; ++i) {
		mul*=base;
	}
	printf("%.2f tht power %d is %.2f\n",base,exp,mul);
	puts("\nDone");
	return 0;
}

