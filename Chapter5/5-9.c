/*
@filename:5-9.c
@Author:RaibFlee
@description:
9.编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数传递给-一个用户自定义的函数Temperatures()。
该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。要使用不同的温标来表示这3个温度值。下 面是华氏温度转摄氏温度的公式:
摄氏温度=5.0/9.0 *(华氏温度-32.0)
开氏温标常用于科学研究，0表示绝对零，代表最低的温度。下 面是摄氏温度转开氏温度的公式:
开氏温度=摄氏温度+ 273.16
Tenperatures()函数中用const创建温度转换中使用的变量。在main(函 数中使用一个循环让用户重复输入温度，当用户输入q或其他非数字时，循环
结束。scanf()函 数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。可以使用==运算符将scanf()的返回值和1作比较，测试两
值是否相等。
*/

#include <stdio.h>
#include <stdlib.h>
void Temperature(double f_temperature);
int main() {
	system("chcp 65001");
	printf("Enter a Fahrenheit temperature: ");
	double f_temperature;
	int result;
	result=scanf("%lf",&f_temperature);
	while (result==1)
	{
		Temperature(f_temperature);
		printf("Enter a Fahrenheit temperature: ");
		result=scanf("%lf",&f_temperature);
	}
	printf("Done");
	return 0;
}
void Temperature(double f_temperature)
{
	const double f_to_c=5.0/9.0*(f_temperature-32.0);//华氏温度转摄氏温度
	const double c_to_k=f_to_c+273.16;//摄氏温度转开始温度
	printf("%.2f℉=%.2f℃=%.2fK\n",f_temperature,f_to_c,c_to_k);
}
