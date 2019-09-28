/*
@filename:10-11.c
@Author:RaibFlee
@description:
11编写一个程序，声明一个int类型的3x5二维数组，并用合适的值初始
化它。该程序打印数组中的值，然后各值翻倍(即是原值的2倍)，并显示
出各元素的新值。编写一.个函数显示数组的内容，再编写一一个函数把各元素
的值翻倍。这两个函数都以函数名和行数作为参数。
*/


#include <stdio.h>
#include <stdlib.h>
void add(int,int,double [][*]);
void show(int,int,double [][*]);
int main() {
	system("chcp 65001");
	double x1[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	printf("x1:");
	show(3,5,x1);
	add(3,5,x1);
	printf("x1':");
	show(3,5,x1);
	return 0;
}

void add(int row,int col, double ar[][col]){
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			ar[i][j]*=2;
		}
	}
}
void show(int row,int col,double ar[][col]){
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf("%.2f,",ar[i][j]);
		}
	}
	printf("\n");
}
