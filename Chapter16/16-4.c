/*
@filename:16-4.c
@Author:RaibFlee
@description:
#include <time.h>
clock_ t clock (void);
这里，clock_ t是定义在time.h中的类型。该函数返回处理器时间，其单
位取决于实现(如果处理器时间不可用或无法表示，该函数将返回-1)。然
而，CLOCKS_PER_SEC(也定义在time.h中)是每秒处理器时间单位的数
量。因此，两个clock()返回值的差值除以CLOCKS_ PER SEC得到两次调用
之间经过的秒数。在进行除法运算之前，把值的类型强制转换成double类
型，可以将时间精确到小数点以后。编写-一个函数，接受- .个double类型的
参数表示时间延迟数，然后在这段时间运行一一个循环。编写-一个简单的程序
测试该函断
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void pause(double);
int main(int argc, char *args[]) {
	system("chcp 65001");
	pause(10);
	puts("done");
	return 0;
}
void pause(double delay){
	double start=(double )clock()/CLOCKS_PER_SEC;
	for (double i = 0; i < delay; ) {
		i=(double)clock()/CLOCKS_PER_SEC-start;
	}
}
