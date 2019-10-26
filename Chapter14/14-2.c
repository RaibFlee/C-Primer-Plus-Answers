/*
@filename:14-2.c
@Author:RaibFlee
@description:
2.编写一个函数，提示用户输入日、月和年。月份可以是月份号、月份
名或月份名缩写。然后该程序应返回一-年中到用户指定日子(包括这一- 天)
的总天数。

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


int days_count(int year,char *month,int days);

int main() {
	system("chcp 65001");
	char name[10];
	int day;
	int year,month,days;
	printf("Enter year,month(number,name,abbr),day,for example 2017 9 15: ");
	while (scanf("%d%s%d",&year, name,&days) == 3) {
		day = days_count(year,name,days);
		if (day != -1){
			printf("total days:%d\n", day);
		}
		else
			printf("input is invalid\n");
		printf("Enter next (ctrl-z to quit):");
	}
	return 0;
}


int days_count(int year,char *month,int days){
	int index, total;
	int monumb=0 ;
	if (strspn(month, "0123456789") == strlen(month))
	{
		monumb=atoi(month);
		if (monumb < 1 || monumb > 12)
			return (-1); /* error signal */
	} else{
	for (int i = 0; i < 12; ++i) {
		if (strcasecmp(month, months[i].name) == 0 || strcasecmp(month, months[i].abbrev) == 0) {
			monumb = months[i].monumb;
			break;
		}
	}
	}
	if (monumb == 0)
		return (-1); /* error signal */
	else {
		for (index = 0, total = 0; index < monumb-1; index++)
			total += months[index].days;
		total+=days;
		if ((year%4==0&&year%100!=0)||year%400==0)//闰年
			if (monumb>2)
				total++;
		return (total);
	}
}
