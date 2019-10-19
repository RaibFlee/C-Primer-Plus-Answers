/*
@filename:12-6.c
@Author:RaibFlee
@description:
6.编写一个程序，生成1000个1~ 10范围内的随机数。不用保存或打印
这些数字，仅打印每个数出现的次数。用10个不同的种子值运行，生成的
数字出现的次数是否相同?可以使用本章自定义的函数或ANSI C的rand()和
srand()函数，它们的格式相同。这是一个测试特定随机数生成器随机性的方
法。
*/


#include <stdio.h>
#include <stdlib.h>
int main() {
	system("chcp 65001");
	int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10;
	const int L=1000;
	int seed;
	for (int i = 0; i < 10; ++i) {
		sum1=sum2=sum3=sum4=sum5=sum6=sum7=sum8=sum9=sum10=0;
		printf("enter seed(an integer):");
		scanf("%d",&seed);
		srand(seed);
		for (int j = 0; j < L; ++j) {
			switch (rand()%10+1){
				case 1:sum1++;
					break;
				case 2:sum2++;
					break;
				case 3:sum3++;
					break;
				case 4:sum4++;
					break;
				case 5:sum5++;
					break;
				case 6:sum6++;
					break;
				case 7:sum7++;
					break;
				case 8:sum8++;
					break;
				case 9:sum9++;
					break;
				case 10:sum10++;
			}
		}
		printf("1:%d times,2:%d times,3:%d times,4:%d times,5:%d times,6:%d times,7:%d times,8:%d times,9:%d times,10:%d times\n",sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10);
	}
	printf("Done.\n");
	return 0;
}
