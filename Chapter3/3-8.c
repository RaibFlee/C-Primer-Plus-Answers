/*
@filename:3-8.c
@Author:RaibFlee
@description:
8.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等
于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以
品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用
浮点类型比整数类型更合适?
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 65001");
	printf("输入杯数:");
	float i;
	scanf("%f", &i);
	printf("%f品脱\n"
		   "%f盎司\n"
		   "%f汤勺\n"
		   "%f茶勺", i / 2, i * 8, i * 8 * 2, i * 8 * 2 * 3);
	return 0;
}
