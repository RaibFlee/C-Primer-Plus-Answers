/*
@filename:9-11.c
@Author:RaibFlee
@description:
11编写并测试Fibonacci0函数，该函数用循环代替递归计算斐波那契
数。
*/


#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
	system("chcp 65001");
	int x;
	printf("enter a  positive integer:");
	while (scanf("%d",&x)==1) {
		while (getchar()!='\n')
			;
		printf("fib(%d) is %d",x,fib(x));
		printf("\nenter two positive integer:");
	}
		return 0;
}
int fib(int x){
	int a,b,temp;
	a=b=1;
	if (x>2)
		for (int i= 3; i <= x; ++i) {
			temp=a;
			a=b;
			b=temp+b;
		}
	return b;
}
