/*
@filename:10-7.c
@Author:RaibFlee
@description:
7.编写一个程序，初始化一-个double类型的二维数组，使用编程练习2中
的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中(因为二维数组
是数组的数组，所以可以使用处理--维数组的拷贝函数来处理数组中的每个
子数组)。
*/


#include <stdio.h>
#include <stdlib.h>

void copy_arr(double [], double [],int size);
int main() {
	system("chcp 65001");
	double x[2][3] = {{1, 2, 6}, {4, 5,6}};
	double x2[2][3];
	for (int i = 0; i < 2; ++i) {
		copy_arr(x2[i],x[i],3);
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%.2f ",x2[i][j]);
		}
		printf("\n");
	}

	return 0;
}


void copy_arr(double t[], double s[],int size)
{
	for (int i = 0; i < size; ++i) {
		t[i]=s[i];
	}
}
