/*
@filename:13-12.c
@Author:RaibFlee
@description:
12.创建一个文本文件，内含20行，每行30个整数。这些整数都在0~ 9
之间，用空格分开。该文件是用数字表示一张图片，0~9表示逐渐增加的灰
度。编写一个程序，把文件中的内容读入一个20x 30的int数组中。一-种把这
些数字转换为图片的粗略方法是:该程序使用数组中的值初始化一-个20x31
的字符数组，用值0对应空格字符，1对应点字符，以此类推。数字越大表
示字符所占的空间越大。例如，用#表示9。每行的最后一个字符(第31个)
是空字符，这样该数组包含了20个字符串。最后，程序显示最终的图片
(即，打印所有的字符串)，并将结果储存在文本文件中。例如，下面是开
始的数据:
009000000000589985200000000000
000090000000589985520000000000
00000000000058 1 985452000000000
000090000000589985045200000000
0090000000005899850045 20000000
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 20
#define COL 30
#define TRA " .':~*=&%@"
void make(int data[][COL],char pic[][COL], int row);
int main() {
	system("chcp 65001");
	FILE *fp;
	char name[20];
	printf("Enter filename: ");
	scanf("%s",name);
	if ((fp=fopen(name,"r"))==NULL){
		printf("can't open %s",name);
		exit(EXIT_FAILURE);
	}
	int in[ROW][COL];
	char out[ROW][COL];
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			fscanf(fp,"%d",&in[i][j]);
		}
	}
	make(in,out,ROW);
	for (int k = 0; k < ROW; ++k) {
		for (int i = 0; i < COL; ++i) {
			putchar(out[k][i]);
		}
		putchar('\n');
	}
	puts("Done");
	return 0;
}
void  make(int data[][COL],char pic[][COL], int row){
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < COL; ++j) {
			pic[i][j]=TRA[data[i][j]];
		}
	}
}
