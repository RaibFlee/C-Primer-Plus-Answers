/*
@filename:3-3.c
@Author:RaibFlee
@description:
 3.编写一个程序，发出一声警报，然后打印下面的文本:
 Startled by the sudden sound, Sally shouted,
"By the Great Pumpkin, what was that!"
*/

#include <stdio.h>
#include <stdlib.h>



int main() {
	system("chcp 65001");
	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n"
		   "\"By the Great Pumpkin, what was that!\"");
	return 0;
}
