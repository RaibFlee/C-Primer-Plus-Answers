/*
@filename:14-4.c
@Author:RaibFlee
@description:
4.编写一个程序，创建-一个有两个成员的结构模板:
a.第1个成员是社会保险号，第2个成员是一个有3个成员的结构，第1个
成员代表名，第2个成员代表中间名，第3个成员表示姓。创建并初始化一-个
内含5个该类型结构的数组。该程序以下面的格式打印数据:
Dribble, Flossie M.- 302039823
如果有中间名，只打印它的第1个字母，后面加一个点(.) ;如果没有
中间名，则不用打印点。编写一个程序进行打印，把结构数组传递给这个函
数。
b.修改a部分，传递结构的值而不是结构的地址。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 10
struct name{
	char first[LEN];
	char middle[LEN];
	char last[LEN];
};
struct person{
	int id;
	struct name f_name;//full name
};
void show(struct person persons[], int n);
void show2(struct person *persons[], int n);
int main() {
	system("chcp 65001");
	struct person persons[5]={{302039823,{"sad","Sdsaf","gds"}},{302439823,{"sad22","Sdsaf","gds"}},{302039853,{"sad5","","gds"}},{302039823,{"sad","Sdsaf","gds"}},{302039723,{"sas3d","Sdsagsf","gdsds"}},};
	struct person * persons2[5];
	for (int i = 0; i <5; ++i) {
		persons2[i]=&persons[i];
	}
	show(persons,5);
	show2(persons2,5);
	return 0;
}

void show(struct person persons[], int n){
	for (int i = 0; i < n; ++i) {
		printf("%s, %s ",persons[i].f_name.last,persons[i].f_name.first);
		if (strcmp("",persons[i].f_name.middle)){
			printf("%c.",persons[i].f_name.middle[0]);
		}
		printf("- %d\n",persons[i].id);
	}
}
void show2(struct person *persons[], int n){
	for (int i = 0; i < n; ++i) {
		printf("%s, %s ",persons[i]->f_name.last,persons[i]->f_name.first);
		if (strcmp("",persons[i]->f_name.middle)){
			printf("%c.",persons[i]->f_name.middle[0]);
		}
		printf("- %d\n",persons[i]->id);
	}
}
