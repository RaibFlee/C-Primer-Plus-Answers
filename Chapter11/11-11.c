/*
@filename:11-1.c
@Author:RaibFlee
@description:
11编写一个函数，读入10个字符串或者读到EOF时停止。该程序为用
户提供一个有5个选项的菜单:打印源字符串列表、以ASCI中的顺序打印字
符串、按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符
串、退出。菜单可以循环显示，除非用户选择退出选项。当然，该程序要能
真正完成菜单中各选项的功能。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 50
#define M 10
void  str_print(char [][*], int);
void str_sort(char *s[],int n);
void str_sort2(char *s[],int n);
int main() {
	system("chcp 65001");
	char x[M][L];
	puts("Enter 10 strings(one string per line) ");
	while (1){
		int count=0;
		int option;
		while (count<10&&fgets(x[count],L,stdin)) {
			char *s;
			if ((s = strchr(x[count], '\n')))
				*s = '\0';
			count++;
		}
		puts("1)打印源字符串列表 2)以ASCI中的顺序打印字符串");
		puts("3)按长度递增顺序打印字符串 4)按字符串中第1个单词的长度打印字符串");
		puts("5)退出");
		puts("enter your choice");
		scanf("%d",&option);
		while (getchar()!='\n');
		if (option==5)
			break;
		str_print(x,option);
		puts("Enter 10 strings(one string per line) ");
	}
	puts("Done");
	return 0;
}

void  str_print( char s[][L], int option){
	 char *s2[M];
	for (int j = 0; j < M; ++j) {
		s2[j]=s[j];
	}
	switch (option){
		case 1:
			puts("{");
			for (int i = 0; i < M; ++i) {
				puts(s[i]);
			}
			puts("}");
			break;
		case 2:str_sort(s2,M);
			puts("{");
			for (int i = 0; i < M; ++i) {
				puts(s2[i]);
			}
			puts("}");
			break;
		case 3:str_sort2(s2,M);
			puts("{");
			for (int i = 0; i < M; ++i) {
				puts(s2[i]);
			}
			puts("}");
			break;
		case 4:
			puts("{");
			for (int i = 0; i < M; ++i) {
				printf("%*s\n",strlen(s[0]),s[i]);
			}
			puts("}");
			break;

	}
}
void str_sort(char *s[],int n){
	char *temp;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i+1; j <n ; ++j) {
			if (strcmp(s[i],s[j])>0){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}
void str_sort2(char *s[],int n){
	char *temp;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i+1; j <n ; ++j) {
			if (strlen(s[i])>strlen(s[j])){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}

