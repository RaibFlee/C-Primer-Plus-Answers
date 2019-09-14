/*
@filename:8-5.c
@Author:RaibFlee
@description:
5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序
最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一
次猜测的值应是50和100中值，也就是75。 如果这次猜大了，那么下一-次猜
测的值应是50和75的中值，等等。使用二分查找(binary search) 策略，如
果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
	system("chcp 65001");
	 int begin=1;
	 int end=100;
	int guess=(begin+end)/2;
	char answer;
	do
	{
		printf("is your number %d?\n",guess);
		printf("enter h for high,l for low,y for yes\n");
		answer=getchar();
		while (getchar()!='\n')
			;
		if (answer=='y')
			printf("success\n");
		else if(answer=='h')
			end=guess;
		else if (answer=='l')
			begin=guess;
		else
		{
			printf("enter again\n");
			continue;
		}
		guess=(begin+end)/2;
	}while (answer!='y');
	printf("done\n");
	return 0;
}
