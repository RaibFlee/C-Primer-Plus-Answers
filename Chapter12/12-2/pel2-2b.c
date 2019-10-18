/*
@filename:pel2-2b.c.c
@Author:RaibFlee
@description:
2.在美国，通常以英里/加仑来计算油耗;在欧洲，以升/100
公里来计
算。下面是程序的一.部分，提示用户选择计算模式(美制或公制)，然后接
收数据并计算油耗。
*/


#include <stdio.h>
#include <stdlib.h>
#include "pe12-2a.h"
int main() {
	system("chcp 65001");
	int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("Done.\n");

	return 0;
}

