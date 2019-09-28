/*
@filename:10-9.c
@Author:RaibFlee
@description:
9.编写一个程序，初始化一个double类型的3x5_维数组，使用一个处理
变长数组的函数将其拷贝至另-一个二维数组中。还要编写- -个以变长数组为
形参的函数以显示两个数组的内容。这两个函数应该能处理任意NxM数组
(如果编译器不支持变长数组，就使用传统C函数处理Nx5的数组)
*/


#include <stdio.h>
#include <stdlib.h>

void copy_arr(int,int,double [][*], double [][*]);
void show(int,int,double [][*]);
int main() {
	system("chcp 65001");
	double x[3][5] = {1, 2, 6, 4, 5,6,7,1,2,3,4,5,6,7,5,};
	double x2[3][5];
	show(3,5,x);
	copy_arr(3,5,x,x2);
	show(3,5,x2);
	return 0;
}


void copy_arr(int row,int col,double ar1[][col], double ar2[][col]){
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			ar2[i][j]=ar1[i][j];
		}
	}
}
void show(int row,int col,double ar[][col]){
	printf("{");
	for (int i = 0; i < row; ++i) {
		printf("{");
		for (int j = 0; j < col; ++j) {
			printf("%.2f,",ar[i][j]);
		}
		printf("},");
	}
	printf("}\n");
}
