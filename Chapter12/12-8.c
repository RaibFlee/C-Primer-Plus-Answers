/*
@filename:12-8.c
@Author:RaibFlee
@description:
提供make_ arrayO和show_ array(函数的定义，完成该程序。make_ arrayO
函数接受两个参数，第1个参数是int类型数组的元素个数，第2个参数是要赋
给每个元素的值。该函数调用malloc()创建- 一个大小合适的数组，将其每个
元素设置为指定的值，并返回一个指向该数组的指针。show_arrayO函数显
示数组的内容，- -行显示8个数。
*/


#include <stdio.h>
#include <stdlib.h>

int *make_array(int elem, int val);

void show_array(const int ar[], int n);

int main() {
	system("chcp 65001");
	int *pa;
	int size;
	int value;
	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0) {
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa) {
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements(-1 to quit): ");
	}
	printf("Done.\n");
	return 0;
}

int *make_array(int elem, int val) {
	int *p;
	p = (int *) malloc(elem * sizeof(int));
	if (p)
		for (int i = 0; i < elem; ++i) {
			p[i] = val;
		}
	return p;
}

void show_array(const int ar[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		printf("%d ", ar[i]);
		if (i % 8 == 7)
			puts("");
	}
	if (i % 8 != 0)
		puts("");
}
