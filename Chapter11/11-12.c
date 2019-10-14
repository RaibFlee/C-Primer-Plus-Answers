/*
@filename:11-12.c
@Author:RaibFlee
@description:
12.编写一一个程序，读取输入，直至读到EOF, 报告读入的单词数、大
写字母数、小写字母数、标点符号数和数字字符数。使用ctype.h头文件中的
函数。
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int main() {
	system("chcp 65001");
	char ch;
	int lowwer=0;//lower letter
	int upper=0;//upper letter
	int punc=0;//punctuation
	int digit=0;
	int words=0;
	bool inword=false;
	while ((ch=getchar())!=EOF){
		if (isupper(ch))
			upper++;
		else if (islower(ch))
			lowwer++;
		else if(ispunct(ch))
			punc++;
		else if(isdigit(ch))
			digit++;
		if (!isspace(ch)&&!inword){
			inword=true;
			words++;
		}
		if (isspace(ch)&&inword)
			inword=false;
	}
	printf("lowercase=%d,uppercase=%d,punctuation=%d,digits=%d,words=%d\n",lowwer,upper,punc,digit,words);
	puts("Done");
	getchar();
	return 0;
}

