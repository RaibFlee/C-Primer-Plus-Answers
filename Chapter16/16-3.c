/*
@filename:16-3.c
@Author:RaibFlee
@description:
3.极坐标用向量的模(即向量的长度)和向量相对x轴逆时针旋转的角
度来描述该向量。直角坐标用向量的x轴和y轴的坐标来描述该向量(见图
16.3) 。编写一个程序，读取向量的模和角度(单位:度)，然后显示x轴
和y轴的坐标。相关方程如下:
x=1*cos Ay= r*sinA
需要一个函数来完成转换，该函数接受--个包含极坐标的结构，并返回
一个包含直角坐标的结构(或返回指向该结构的指针)。
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEGtoRAD ((4*atan(1))/180)
struct polar {
	double modulo;
	double degree;
};
struct rect {
	double x;
	double y;
};

struct rect po_to_re(struct polar);

int main(int argc, char *args[]) {
	system("chcp 65001");
	struct rect re;
	struct polar po;
	printf("Enter modulo and degree(for example:10 20): ");
	while (scanf("%lf%lf", &po.modulo, &po.degree) == 2) {
		re = po_to_re(po);
		printf("%.2f %.2f is x:%.2f,y:%.2f\n", po.modulo, po.degree, re.x, re.y);
		printf("Enter modulo and degree(for example:10 20): ");
	}
	return 0;
}

struct rect po_to_re(struct polar po) {
	struct rect re;
	re.x = po.modulo * cos(po.degree * DEGtoRAD);
	re.y = po.modulo * sin(po.degree * DEGtoRAD);
	return re;
}
