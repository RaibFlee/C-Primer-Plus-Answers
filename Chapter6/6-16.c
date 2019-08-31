/*
@filename:6-16.c
@Author:RaibFlee
@description:
16.Daphne以10%的单利息投资了100美元(也就是说，每年投资获利相
当于原始投资的10%)。Deirdre以 5%的复合利息投资了100美元(也就是
说，利息是当前余额的5%， 包含之前的利息)。编写一个程序，计算需要
多少年Deirdre的投资额才会超过Daphne,并显示那时两人的投资额。
*/

#include <stdio.h>
#include <stdlib.h>
#define original 100
int main() {
	system("chcp 65001");
	double x,y;
	x=y=original;
	int i=1;
	do
	{
		x+=original*0.1;
		y*=1.05;
		i++;
	}while (y<=x);
	printf("Years:%dDaphne:%fDeirdre:%f",i,x,y);
	return 0;
}
