/*
@filename:4-7.c
@Author:RaibFlee
@description:
7.编写一个程序，将一个double类型的变量设置为1.0/3.0， 一个float类
型的变量设置为1.0/3.0。分别显示两次计算的结果各3次:一次显示小数点
后面6位数字; - -次显示小数点后面12位数字;一次显示小数点后面16位数
字。程序中要包含float.h头文件，并显示FLT_ DIG和DBL DIG的值。1.0/3.0
的值与这些值- -致吗?
*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
int main() {
	system("chcp 65001");
	double db=1.0/3.0;
	float fl=1.0/3.0;
	printf("float values:%.6f %.12f %.16f\n",fl,fl,fl);
	printf("double values:%.6f %.12f %.16f\n",db,db,db);
	printf("FLT_DIG:%d\n",FLT_DIG);
	printf("DBL_DIG:%d",DBL_DIG);
	return 0;
}
