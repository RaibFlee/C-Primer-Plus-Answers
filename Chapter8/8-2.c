/*
@filename:8-2.c
@Author:RaibFlee
@description:
2.编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要
打印每个输入的字符及其相应的ASCII t进制值。注意，在ASCI序列中，空
格字符前面的字符都是非打印字符，要特殊处理这些字符。如果非打印字符
是换行符或制表符，则分别打印n或\t。否则，使用控制字符表示法。例
如，ASCI的1是Ctrl+A，可显示为^A。注意，A的ASCI值是Ctrl+A的值加上;
64。其他非打印字符也有类似的关系。除每次遇到换行符打印新的一.行之
外，每行打印10对值。(注意: 不同的操作系统其控制字符可能不同。)
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int ch;
	int count=0;
	while ((ch=getchar())!=EOF)
	{
		if (ch<32)
			printf("not printable:%d",ch);
		else
			printf("%c%d",ch,ch);
		count++;
		if (count==10)
			printf("\n");
	}
	printf("done\n");
	return 0;
}
