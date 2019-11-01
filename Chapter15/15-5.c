/*
@filename:15-5.c
@Author:RaibFlee
@description:
5.编写一个函数，把一个unsigned int类型值中的所有位向左旋转指定数
量的位。例如，rotate_l(x, 4)把x中所有 位向左移动4个位置，而且从最左端
移出的位会重新出现在右端。也就是说，把高阶位移出的位放入低阶位。在
一个程序中测试该函数。
*/


#include <stdio.h>
#include <stdlib.h>
const static int size=8* sizeof(int);
unsigned int rotate_l(unsigned int, int);

char* base10to2(int ,char *);
int main(int argc,char *args[]) {
	system("chcp 65001");
	int offst;
	unsigned int x;
	char num[size+1];
	num[size]='\0';
	printf("Enter a positive integer and offest(begin with 0): ");
	while (scanf("%u%d",&x,&offst)==2){
		printf("%d(%s) left %d is ",x,base10to2(x,num),offst);
		printf("%s\n",base10to2(rotate_l(x,offst),num));
		printf("Enter a positive integer and offest(begin with 0): ");
	}
	return 0;
}
unsigned int rotate_l(unsigned int x, int offset){
	static int size=8* sizeof(unsigned int);
	x=(x<<offset)|(x>>(size-offset));
	return x;
}
char * base10to2(int x,char *str){
	for (int i = size-1; i >= 0 ; --i,x>>=1) {
		str[i]=(x&0x1)+'0';
	}
	return str;
}
