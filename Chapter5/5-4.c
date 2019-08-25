/*
@filename:3-8.c
@Author:RaibFlee
@description:
4.编写一个程序，提示用户输入一个身高(单位:厘米)，并分别以厘米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下:
Enter a height in centimeters:
182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit):
168.7
168.0 cm = 5 feet,6.4 inches
Enter a height in centimeters (<=0 to quit): 0
bye
*/

#include <stdio.h>
#include <stdlib.h>
#define CM_TO_INCH 0.3937f
#define FEET_TO_INCH 12
int main() {
	system("chcp 65001");
	printf("Enter a height in centimeters (<=0 to quit):");
	float height;
	scanf("%f",&height);
	while(height>0)
	{
		float inch;
		int feet;
		feet=(int)(height*CM_TO_INCH/FEET_TO_INCH);
		inch=(height*CM_TO_INCH-feet*FEET_TO_INCH);
		printf("%.1f cm = %d feet, %.1f inches\n",height,feet,inch);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f",&height);
	}
	printf("Done");
	return 0;
}
