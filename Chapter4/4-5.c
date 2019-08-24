/*
@filename:4-5.c
@Author:RaibFlee
@description:
5.编写一个程序，提示用户输入以兆位每秒(Mb/s) 为单位的下载速度和以兆字节(MB)为单位的文件大小。程序中应计算文件的下载时间。注
意，这里1字节等于8位。使用float类型， 并用/作为除号。该程序要以下面的格式打印3个变量的值(下载速度、文件大小和下载时间)，显示小数点后面两位数字:
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("chcp 65001");
	printf("Enter download speed(Mb) and filesize(MB)：");
	float speed,filesize;
	scanf("%f %f",&speed,&filesize);
	printf("At %.2f megabits per second, a file of 2.20 megabytes\ndownloads in %.2f seconds.",speed,filesize/speed*8);
	return 0;
}
