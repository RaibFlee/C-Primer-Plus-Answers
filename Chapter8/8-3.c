/*
@filename:8-3.c
@Author:RaibFlee
@description:
3.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序
要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续
的。或者使用ctype.h库中合适的分类函数更方便。
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	system("chcp 65001");
	int ch;
	int count_lower=0,count_upper=0,count_other=0;
	while ((ch=getchar())!=EOF)
		if (islower(ch))
			count_lower++;
		else if (isupper(ch))
			count_upper++;
		else
			count_other++;
	printf("upper:%d lower:%d other:%d\n",count_upper,count_lower,count_other);
	printf("done\n");
	return 0;
}
