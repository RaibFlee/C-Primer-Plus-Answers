/*
@filename:14-1.c
@Author:RaibFlee
@description:
1.重新编写复习题
5，用月份名的拼写代替月份号(别忘了使用
strcmp()。在一个简单的程序中测试该函数。
复习题 5.编写一个函数，用户提供月份号，该函数就返回一年中到该月为止
(包括该月)的总天数。假设在所有函数的外部声明了第3题的结构模版和
一个该类型结构的数组。

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct month {
	char name[10];
	char abbrev[4];
	int days;
	int monumb;
};
struct month months[12] = {
		{"January",   "jan", 31, 1},
		{"February",  "feb", 28, 2},
		{"March",     "mar", 31, 3},
		{"April",     "apr", 30, 4},
		{"May",       "may", 31, 5},
		{"June",      "jun", 30, 6},
		{"July",      "jul", 31, 7},
		{"August",    "aug", 31, 8},
		{"September", "sep", 30, 9},
		{"October",   "oct", 31, 10},
		{"November",  "nov", 30, 11},
		{"December",  "dec", 31, 12}
};

int days(char *month) {
	int index, total;
	int monumb = 0;
//	month[0] = toupper(month[0]);
//	for (int i = 1; month[i] != '\0'; ++i) {
//		month[i] = tolower(month[i]);
//	}
	for (int i = 0; i < 12; ++i) {
		if (strcasecmp(month, months[i].name) == 0) {
			monumb = months[i].monumb;
			break;
		}
	}
	if (monumb == 0)
		return (-1); /* error signal */
	else {
		for (index = 0, total = 0; index < monumb; index++)
			total += months[index].days;

		return (total);
	}
}

int main() {
	system("chcp 65001");
	char name[10];
	int day;
	printf("Enter the name of month: ");
	while (scanf("%s", name) == 1) {
		day = days(name);
		if (day != -1)
			printf("total days:%d\n", day);
		else
			printf("%s is not a valid month name\n", name);
		printf("Enter next name(ctrl-z to quit):");
	}
	return 0;
}
