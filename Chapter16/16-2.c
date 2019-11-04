/*
@filename:16-2.c
@Author:RaibFlee
@description:
2.两数的调和平均数这样计算:先得到两数的倒数，然后计算两个倒数
的平均值，最后取计算结果的倒数。使用#define指令定义一个宏“函数”，执
行该运算。编写一个简单的程序测试该宏。
*/


#include <stdio.h>
#include <stdlib.h>
#define avg(x1,x2) (1/((1.0/(x1)+1.0/(x2))/2))
int main(int argc,char *args[]) {
	system("chcp 65001");
	printf("%f",avg(1,2));
	return 0;
}
