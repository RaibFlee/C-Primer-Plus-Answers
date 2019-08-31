/*
@filename:6-1.c
@Author:RaibFlee
@description:
1编写一个程序，创建-一个包含26个元素的数组，并在其中储存26个小
写字母。然后打印数组的所有内容。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	char x[26];
	int i;
	char y;
	for(i=0,y='a';i<26;i++,y++)
	{
		x[i]=y;
	}
	printf("%s",x);
	return 0;
}
