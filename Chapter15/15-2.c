/*
@filename:15-2.c
@Author:RaibFlee
@description:
2.编写一个程序，通过命令行参数读取两个二进制字符串，对这两个二
进制数使用~运算符、&运算符、|运算符和^运算符，并以二进制字符串形
式打印结果(如果无法使用命令行环境，可以通过交互式让程序读取字符
串)。
*/


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#define MASK 0x1
#define LEN CHAR_BIT* sizeof(int)+1
int bstr_10(const char *bstr);//二进制转十进制
char* itostr(int n, char *bstr);//十进制转二进制
int main(int argc,char *args[]) {
	system("chcp 65001");
	char str[LEN]={[32]='\0'};
	int x1,x2;
	x1=bstr_10(args[1]);
	x2=bstr_10(args[2]);
	printf("~%s=%s\n",args[1],itostr(~x1,str));
	printf("~%s=%s\n",args[2],itostr(~x2,str));
	printf("%s&%s=%s\n",args[1],args[2],itostr(x1&x2,str));
	printf("%s|%s=%s\n",args[1],args[2],itostr(x1|x2,str));
	printf("%s^%s=%s\n",args[1],args[2],itostr(x1^x2,str));
	return 0;
}
int bstr_10(const char *bstr){
	int num_10=0;
		for (int i = strlen(bstr)-1; i >=0 ; --i) {
			num_10+=(bstr[i]-'0')*pow(2,strlen(bstr)-1-i);
		}
	return num_10;

	}

char* itostr(int n, char *bstr){
	for (int i = LEN-2; i>=0; --i) {
		bstr[i]=(n&MASK)+'0';
		n>>=1;
	}
	return bstr;
}
