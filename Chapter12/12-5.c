/*
@filename:12-5.c
@Author:RaibFlee
@description:
5.编写一个程序，生成100个1~ 10范围内的随机数，并以降序排列(可
以把第11章的排序算法稍加改动，便可用于整数排序，这里仅对整数排
序)。
*/


#include <stdio.h>
#include <stdlib.h>
#define L 100
void print_array(int [],int);
void sort_array(int [], int);
int main() {
	system("chcp 65001");
	int x[L];
	for (int i = 0; i < L; ++i) {
		x[i]=rand()%10+1;
	}
	puts("排序前");
	print_array(x,L);
	sort_array(x,L);
	puts("排序后");
	print_array(x,L);
	printf("Done.\n");
	return 0;
}
void print_array(int x[],int l){
	int i;
	for ( i = 0; i < l; ++i) {
		printf("%d ",x[i]);
		if (i%10==9)
			puts("");
	}
	if (i%10!=0)
		puts("");
}
void sort_array(int x[], int l){
	int i,j,temp;
	for (i = 0; i <l-1 ; ++i) {
		for (j = i+1; j < l; ++j) {
			if (x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
