/*
@filename:14-3.c
@Author:RaibFlee
@description:
3.修改程序清单14.2中的图书目录程序，使其按照输入图书的顺序输出
图书的信息，然后按照标题字母的声明输出图书的信息，最后按照价格的升
序输出图书的信息。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 /*书籍的最大数量*/
struct book {
/*简历book模板*/
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

char *s_gets(char *st, int n);
void sort_title(struct book *ar[], int n);
void sort_value(struct book *ar[], int n);

int main() {
	system("chcp 65001");
	struct book library[MAXBKS]; /* book类型结构的数组*/
	struct book *lib[MAXBKS];
	int count = 0;
	int index;
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0') {
		printf("Now enter the author\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count].value);
		lib[count]=&library[count];
		count++;
		while (getchar() != '\n')
			continue;
/*清理输入行*/
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if (count > 0) {
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
				   library[index].author, library[index].value);
		printf("Here is the list of your books sorted by title:\n");
		sort_title(lib,count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", lib[index]->title,
				   lib[index]->author, lib[index]->value);
		printf("Here is the list of your books sorted by value:\n");
		sort_value(lib,count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", lib[index]->title,
				   lib[index]->author, lib[index]->value);
	} else
		printf("No books? Too bad.n");


	return 0;
}

char *s_gets(char *st, int n) {
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		find = strchr(st, '\n'); // 查找换行符
		if (find)
//如果地址不是NULL,
			*find = '\0';
//在此处放置-一个空字符
		else
			while (getchar() != '\n')
				continue;
	}
//处理输入行中剩余的字符
	return ret_val;
}
void sort_title(struct book *ar[], int n){
	struct book *temp;
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j <n; ++j) {
			if (strcmp(ar[i]->title,ar[j]->title)>0){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
void sort_value(struct book *ar[], int n){
	struct book *temp;
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j <n; ++j) {
			if (ar[i]->value > ar[j]->value){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}

}
