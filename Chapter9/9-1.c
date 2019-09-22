/*
@filename:9-1.c
@Author:RaibFlee
@description:
1.设计一个函数min(x, y)，返回两个double类型值的较小值。在一一个简单
的驱动程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>
double min(double x, double y){
	return x<y?x:y;
}
int main() {
	system("chcp 65001");
	printf("min(%.2f,%.2f)=%.2f",10.0,11.0,min(10,11));
	return 0;
}
