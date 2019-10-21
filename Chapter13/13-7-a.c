/*
@filename:13-7-a.c
@Author:RaibFlee
@description:
7.编写一个程序打开两个文件。可以使用命令行参数或提示用户输入文
件名。
a.该程序以这样的顺序打印:打印第1个文件的第1行，第2个文件的第1
行，第1个文件的第2行，第2个文件的第2行，以此类推，打印到行数较多文
件的最后一.行。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main() {
	system("chcp 65001");
	char name1[LEN], name2[LEN];
	int ch;
	int ch1_pre, ch2_pre;//save the char before EOF
	ch1_pre = ch2_pre = 0;
	int count_eof = 0;//the number of eof;
	printf("Enter tow filename: ");
	scanf("%s%s", name1, name2);
	FILE *f1, *f2;
	if ((f1 = fopen(name1, "r")) == NULL) {
		printf("can't open %s\n", name1);
		exit(EXIT_FAILURE);
	}
	if ((f2 = fopen(name2, "r")) == NULL) {
		printf("can't open %s\n", name2);
		exit(EXIT_FAILURE);
	}
	while (count_eof != 2) {
		count_eof = 0;
		while ((ch = getc(f1)) != EOF) {
			ch1_pre = ch;
			putchar(ch);
			if (ch == '\n')
				break;
		}
		if (ch == EOF) {
			count_eof++;
			if (ch1_pre != '\n') {
				putchar('\n');
				ch1_pre = '\n';
			}
		}
		while ((ch = getc(f2)) != EOF) {
			ch2_pre = ch;
			putchar(ch);
			if (ch == '\n')
				break;
		}
		if (ch == EOF) {
			count_eof++;
			if (ch2_pre != '\n') {
				putchar('\n');
				ch2_pre = '\n';
			}
		}

	}
	fclose(f1);
	fclose(f2);
	return 0;
}
