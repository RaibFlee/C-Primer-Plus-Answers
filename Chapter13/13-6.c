/*
@filename:13-6.c
@Author:RaibFlee
@description:
6.使用命令行参数的程序依赖于用户的内存如何正确地使用它们。重写
程序清单
13.2中的程序， 不使用命令行参数，而是提示用户输入所需信
息。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main() {
	FILE *in, *out;// 声明两个指向 FILE 的指针
	int ch;
	char name_in[LEN];//储存输入文件名
	char name[LEN];// 储存输出文件名
	int count = 0;
	printf("Enter original filename: ");
	scanf("%s",name_in);
// 设置输入
	if ((in = fopen(name_in, "r")) == NULL) {
		fprintf(stderr, "I couldn't open the file \"%s\"\n", name_in);
		exit(EXIT_FAILURE);
	}
// 设置输出
	strncpy(name, name_in, LEN - 5);
	name[LEN - 5] = '\0';
	strcat(name, ".red");
	if ((out = fopen(name, "w")) == NULL) {
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
// 拷贝数据
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);// 打印3个字符中的第1个字符 // 收尾工作
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0;
}
