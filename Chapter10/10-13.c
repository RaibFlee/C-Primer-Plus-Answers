/*
@filename:10-13.c
@Author:RaibFlee
@description:
13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
(假设用户都正确地响应，不会输入非数值数据)。该程序应完成下列任
务。
a.把用户输入的数据储存在3x5的数组中
b.计算每组(5个)数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果
每个任务都要用单独的函数来完成(使用传统C处理数组的方式)。完
成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该
函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c
和d的函数应把结果返回主调函数。
*/


#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 5
void get_ar(int, double [][*]);
double get_ave(double []);
double arr_ave(double [][*]);
double max(double [][*]);
int main() {
	system("chcp 65001");
	double x1[ROW][COL];
	get_ar(ROW,x1);
	for (int i = 0; i < ROW; ++i) {
		printf("row%d average:%f\n",i+1,get_ave(x1[i]));
	}
	printf("array average:%lf\n",arr_ave(x1));
	printf("max:%f\n",max(x1));
	return 0;
}

void get_ar(int row, double ar[][COL]){
	for (int i = 0; i < row; ++i) {
		printf("输入第%d个数组(5个数):",i+1);
		for (int j = 0; j < COL; ++j) {
			scanf("%lf",&ar[i][j]);
		}
	}
}
double get_ave(double ar[]){
	double sum=0;
	for (int i = 0; i < COL; ++i) {
		sum+=ar[i];
	}
	return sum/COL;
}
double arr_ave(double ar[][COL]){
	double sum=0;
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			sum+=ar[i][j];
		}
	}
	return sum/(ROW*COL);
}
double max(double ar[][COL]){
	double sum=ar[0][0];
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			if (sum<ar[i][j])
			sum=ar[i][j];
		}
	}
	return sum;

}
