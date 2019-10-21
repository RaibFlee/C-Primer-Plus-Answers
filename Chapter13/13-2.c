/*
@filename:13-2.c
@Author:RaibFlee
@description:
2.编写一个文件拷贝程序，该程序通过命令行获取原始文件名和拷贝文
件名。尽量使用标准I/O和二进制模式。
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *args[]) {
	system("chcp 65001");
	char x;
	if (argc!=3){
		printf("Usage:%s %s(original) %s(destination)\n",args[0],args[1],args[2]);
		exit(EXIT_FAILURE);
	}
	FILE *f1,*f2;//f1:orginal,f2:destination
	if ((f1=fopen(args[1],"rb"))==NULL){
		printf("can't open %s\n",args[1]);
		exit(EXIT_FAILURE);
	}
	if ((f2=fopen(args[2],"wb"))==NULL){
		printf("can't create %s\n",args[2]);
		exit(EXIT_FAILURE);
	}
	fread(&x, sizeof(char),1,f1);
	while (!feof(f1)){
		fwrite(&x, sizeof(char),1,f2);
		fread(&x, sizeof(char),1,f1);
	}
	fclose(f1);
	fclose(f2);
	printf("Done.\n");
	return 0;
}

