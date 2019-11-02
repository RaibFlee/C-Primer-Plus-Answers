/*
@filename:15-6.c
@Author:RaibFlee
@description:
6.设计一个位字段结构以储存下面的信息。
字体ID: 0~255之间的一个数;
字体大小: 0~127之间的一个数;
对齐: 0~2之间的-一个数，表示左对齐、居中、右对齐;
加粗:开(1)或闭(0);
斜体:开(1)或闭(0);
在一个程序中使用该结构来打印字体参数，并使用循环菜单来让用户改
变参数。例如，该程序的一个运行示例如下:
该程序要使用按位与运算符(&)和合适的掩码来把字体ID和字体大小.
信息转换到指定的范围内。
*/


#include <stdio.h>
#include <stdlib.h>
struct FONT{
	unsigned int id:8;
	unsigned int size:7;
	unsigned int align:2;//0:left,1:center,2:right
	unsigned int bold:1;
	unsigned int italic:1;
	unsigned int :13;
};
char* align[3]={"left","center","right"};
void print_font(struct FONT *);
void print_menu(void);
int main(int argc,char *args[]) {
	system("chcp 65001");
	char option;
	unsigned int data;
	struct FONT font={1,12,0,0,0};
	print_font(&font);
	print_menu();
	printf("Enter your option: ");
	while (scanf(" %c",&option)){
		switch (option){
			case 'f':printf("Enter font id: ");
					scanf("%u",&data);
					font.id=data;
				break;
			case 's':printf("Enter font size: ");
					scanf("%u",&data);
					font.size=data;
				break;
			case 'a':printf("Select alignment:\n"
				   "0)left 1) center   2)right\n");
				scanf("%u",&data);
				font.align=data;
				break;
			case 'b':printf("Toggle bold");
			font.bold=!font.bold;
				break;
			case 'i':printf("toggle italic");
			font.italic=!font.italic;
				break;
			case 'q':puts("bye");
			exit(0);
			default:puts("Error,enter again");
		}
		print_font(&font);
		print_menu();
		printf("Enter your option: ");
	}
	return 0;
}
void print_font(struct FONT *font){
	printf("%3s %s %s %3s %3s\n","ID", "SIZE", "ALIGNMENT","B","I");
	printf("%3u %4u %8s %s %s\n",font->id,font->size,align[font->align],font->bold?"on":"off",font->italic?"on":"off");
}
void print_menu(void){
	printf("f )change font  s)change size  a)change alignment\n"
		   "b)toggle bold  i)     toggle italic u)  q)quit\n");
}
