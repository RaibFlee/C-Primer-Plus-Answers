/*
@filename:pel2-3a.c 
@Author:RaibFlee
@description:
*/
//
// Created by RaibFlee on 2019/10/17.
//
#include "pe12-2a.h"
#include <stdio.h>
void set_mode(int mode_,int *mode){
	if (mode_>1)
		printf( "Invalid mode specified. Mode %d(%s)-Previous mode wil1 be used.\n",*mode,*mode?"US":"metric") ;
	else
		*mode=mode_;
}
void get_info(int mode, double *distance, double *fuel){
	if (mode==0)
		printf("Enter distance traveled in kilometers:");
	else
		printf("Enter distance traveled in miles:");
	scanf("%lf",distance);
	if (mode==0)
		printf("Enter fuel consumed in lites:");
	else
		printf("Enter fuel consumed in gallons:");
	scanf("%lf",fuel);

}
void show_info(int mode, double distance, double fuel){
	if (mode==0)
		printf("fuel consumption is %.2f lites per 100km.\n",fuel/distance*100);
	else
		printf("fuel consumption is %.2f miles per gallon.\n",distance/fuel);
}
