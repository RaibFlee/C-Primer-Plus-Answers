/*
@filename:pel2-3b.c
@Author:RaibFlee
@description:
2.在美国，通常以英里/加仑来计算油耗;在欧洲，以升/100
公里来计
算。下面是程序的一.部分，提示用户选择计算模式(美制或公制)，然后接
收数据并计算油耗。
3.重新设计编程练习2，要求只使用自动变量。该程序提供的用户界面
不变，即提示用户输入模式等。但是，函数调用要作相应变化。
*/


#include <stdio.h>
#include <stdlib.h>
#include "pe12-2a.h"
int main() {
	system("chcp 65001");
	int mode,mode_;
	mode=1;
	double distance,fuel;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode_);
	while (mode_ >= 0)
	{
		set_mode(mode_,&mode);
		get_info(mode,&distance,&fuel);
		show_info(mode,distance,fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d",&mode_);
	}
	printf("Done.\n");

	return 0;
}

