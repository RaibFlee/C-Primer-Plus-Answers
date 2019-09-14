/*
@filename:8-4.c
@Author:RaibFlee
@description:
4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要:
报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点
符号也不应该统计，但是现在暂时不同考虑这么多(如果你比较在意这点，
考虑使用ctype .h系列中的ispunct(函数)。
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
	system("chcp 65001");
	int ch;
	int count_word,count_ch;
	bool isword=false;
	count_ch=count_word=0;
	while ((ch=getchar())!=EOF)
	{
		if (!isspace(ch)&&!isword)
		{
			isword=true;
			count_word++;
		}
		if (isspace(ch)&&isword)
			isword=false;
		if (isword)
			count_ch++;
	}
	printf("average chars:%f\n",(double)count_ch/count_word);
	printf("done\n");
	return 0;
}
