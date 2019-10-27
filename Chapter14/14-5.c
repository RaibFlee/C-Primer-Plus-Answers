/*
@filename:14-5.c
@Author:RaibFlee
@description:
5.编写一个程序满足下面的要求。
a.外部定义一- 个有两个成员的结构模板name: - 一个字符串储存名，一个
字符串储存姓。
b.外部定义一一个有3个成员的结构模板student:一-个name类型的结构，
一个grade数组储存3 个浮点型分数，- -个变量储存3个分数平均数。
c.在main()函数中声明一个内含CSIZE (CSIZE=4)个student 类型结构的
数组，并初始化这些结构的名字部分。用函数执行d、e、f和g中描述的任
务。
d.以交互的方式获取每个学生的成绩，提示用户输入学生的姓名和分
数。把分数储存到grade数组相应的结构中。可以在main()函数或其他函数中
用循环来完成。
e.计算每个结构的平均分，并把计算后的值赋给合适的成员。
f.打印每个结构的信息。
g打印班级的平均分，即所有结构的数值成员的平均值。
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 10
#define CSIZE 4
struct name{
	char first[LEN];
	char last[LEN];
};
struct student{
	struct name f_name;//full name
	double grade[3];
	double mean;
};
void get_grade(struct student students[], int n);
void get_mean(struct student students[], int n);
void show(struct student students[], int n);
void show_class(struct student students[], int n);
int main() {
	system("chcp 65001");
	struct student students[CSIZE]={{{"a","a1"}},{{"b","b1"}},{{"c","c1"}},{{"d","d1"}},};
	get_grade(students,CSIZE);
	get_mean(students,CSIZE);
	show(students,CSIZE);
	show_class(students,CSIZE);
	return 0;
}
void get_grade(struct student students[], int n){
	for (int i = 0; i < n; ++i) {
		printf("Enter 3 grades for %s %s(for example 15 20 30): ",students[i].f_name.last,students[i].f_name.first);
		for (int j = 0; j < 3; ++j) {
			while (scanf("%lf",&students[i].grade[j])!=1){
				printf("Enter a number,please\n");
				scanf("%*s");
			}
		}
	}
}

void get_mean(struct student students[], int n){
	double mean,total;
	for (int i = 0; i < n; ++i) {
		 total=0;
		for (int j = 0; j < 3; ++j) {
			total+=students[i].grade[j];
		}
		mean=total/3;
		students[i].mean=mean;
	}
}
void show(struct student students[], int n){
	for (int i = 0; i < n; ++i) {
		printf("%s %s ",students[i].f_name.last,students[i].f_name.first);
		printf("3 grades ");
		for (int j = 0; j < 3; ++j) {
			printf("%.2f ",students[i].grade[j]);
		}
		printf("mean %.2f",students[i].mean);
		putchar('\n');
	}
}
void show_class(struct student students[], int n){
	double total=0;
	for (int i = 0; i < n; ++i) {
		total+=students[i].mean;
	}
	printf("class mean:%.2f",total/n);
}
