/*
@filename:10-8.c
@Author:RaibFlee
@description:
8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3~第5
个元素拷贝至内含3个元素的数组中。该函数本身不需要修改，只需要选择
合适的实际参数(实际参数不需要是数组名和数组大小，只需要是数组元素
的地址和待处理元素的个数)。
*/


#include <stdio.h>
#include <stdlib.h>

void copy_arr(double [], double [],int size);
int main() {
	system("chcp 65001");
	double x[7] = {1, 2, 6, 4, 5,6,7};
	double x2[3];
	copy_arr(x2,x+2,3);
	for (int i = 0; i < 3; ++i) {
		printf("%.2f ",x2[i]);
	}
	return 0;
}


void copy_arr(double t[], double s[],int size)
{
	for (int i = 0; i < size; ++i) {
		t[i]=s[i];
	}
}
