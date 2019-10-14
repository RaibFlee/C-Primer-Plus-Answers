/*
@filename:11-16.c
@Author:RaibFlee
@description:
16.编写一个程序读取输入，直至读到文件结尾，然后把字符串打印出
来。该程序识别和实现下面的命令行参数:
P
按原样打印
-U
把输入全部转换成大写
-1
把输入全部转换成小写
如果没有命令行参数，则让程序像是使用了-p参数那样运行。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define L 50
int main(int argc,char *args[]) {
	system("chcp 65001");
	char mode;
	char s[L]="";
	char ch;
	int i=0;
	if (argc==1)
		mode='p';
	else
		mode=*args[1];
//	printf("%c",mode);
	while ((ch=getchar())!=EOF){
		if (ch=='\n')
			continue;
		if (mode=='u')
			s[i]=toupper(ch);
		else if(mode=='l')
			s[i]=tolower(ch);
		else
			s[i]=ch;
		i++;
	}
	s[i]='\0';
	puts(s);
	puts("Done");
	return 0;
}

