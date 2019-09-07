/*
@filename:7-6.c
@Author:RaibFlee
@description:
6.编写程序读取输入，读到#停止，报告ei出现的次数。
注意
该程序要记录前一个字符和当前字符。用"Receive your eieio award"这
样的输，入来测试。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	char former,latter;
	former='a';
	int count=0;
	printf("enter a string:");
	while((latter=getchar())!='#')
	{
		if (latter=='#')
			break;
		else if (former=='e'&&latter=='i')
			count++;
		former=latter;
	}
	printf("occur %d time(s)",count);
	return 0;
}
