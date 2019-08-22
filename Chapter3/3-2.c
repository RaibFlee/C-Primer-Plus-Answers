#include <stdio.h>
#include <stdlib.h>
/*2.编写一个程序，要求提示输入一个ASCI码值(如，66)，然后打印
输入的字符。*/
//第2行和第7行的作用是防止Windows下输出中文乱码
int main() {
	system("chcp 65001");
	printf("请输入一个ACSII值:");
	int i;
	scanf("%d", &i);
	printf("你输入的字符是:%c", i);
	getchar();
	return 0;
}
