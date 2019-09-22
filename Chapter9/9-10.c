/*
@filename:9-10.c
@Author:RaibFlee
@description:
10.为了让程序清单9.8中的to_ binary(函 数更通用，编写- - 个to_ base_ n)
函数接受两个在2~ 10范围内的参数，然后以第2个参数中指定的进制打印第
1个参数的数值。例如，to_ base_ n(129， 8)显示的结果为201，也就是129的
八进制数。在一个完整的程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>
void to_base_n(int, int);
int main() {
	system("chcp 65001");
	int x,base;
	printf("enter two  positive integer:");
	while (scanf("%d%d",&x,&base)==2) {
		while (getchar()!='\n')
			;
		printf("%d to base %d is ",x,base);
		to_base_n(x,base);
		printf("\nenter two positive integer:");
	}
		return 0;
}
void to_base_n(int x,int base){
	int mod=x%base;
	if (x>=base)
		to_base_n(x/base,base);
	printf("%d",mod);
}
