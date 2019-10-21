/*
@filename:13-5.c
@Author:RaibFlee
@description:
5.修改程序清单13.5中的程序，用命令行界面代替交互式界面。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096

void append(FILE *source, FILE *dest);

char *s_gets(char *st, int n);

int main(int argc, char *args[]) {
	FILE *fa, *fs;
	int files = 0;
//	args[1];// 目标文件名
//	args[2]; // 源文件名
	int ch;
	if ((fa = fopen(args[1], "a+")) == NULL) {
		fprintf(stderr, "Can't open %s\n", args[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	if (strcmp(args[2], args[1]) == 0)
		fputs("Can't append file to itself\n", stderr);
	else if ((fs = fopen(args[2], "r")) == NULL)
		fprintf(stderr, "Can't open %s\n", args[2]);
	else {
		if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
			fputs("Can't create input buffer\n", stderr);
		}
		append(fs, fa);
		if (ferror(fs) != 0)
			fprintf(stderr, "Error in reading file %s.\n", args[2]);
		if (ferror(fa) != 0)
			fprintf(stderr, "Error in writing file %s.\n", args[1]);
		fclose(fs);
		files++;
		printf("File %s appended.\n", args[2]);
	}
	printf("Done appending.%d files appended.\n", files);
	rewind(fa);
	printf("%s contents:\n", args[1]);
	while ((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("\nDone displaying.");
	fclose(fa);
	return 0;
}

void append(FILE *source, FILE *dest) {
	size_t bytes;
	static char temp[BUFSIZE]; // 只分配一次
	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}

