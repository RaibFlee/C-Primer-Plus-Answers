/*
@filename:15-1.c
@Author:RaibFlee
@description:
1.编写一个函数，把二进制字符串转换为一一个数值。例如，有下面的语
句:
char * pbin = "01001001";
那么把pbin作为参数传递给该函数后，它应该返回--个int类型的值25。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#define MASK 0x1
int main() {
	system("chcp 65001");
	const size_t LEN=CHAR_BIT* sizeof(int)+1;
	char num_str[LEN];
	int num_10;
	printf("Enter a binary number up to %zd igits(not binary number to quit): ",LEN-1);
	while (scanf("%s",num_str)&&strspn(num_str,"01")==strlen(num_str)){
	num_10=0;
		for (int i = strlen(num_str)-1; i >=0 ; --i) {
			num_10+=(num_str[i]-'0')*pow(2,strlen(num_str)-1-i);
		}
		printf("%s is %d\n",num_str,num_10);
		printf("Enter a binary number up to %zd igits(not binary number to quit): ",LEN-1);
	}
	return 0;
}
