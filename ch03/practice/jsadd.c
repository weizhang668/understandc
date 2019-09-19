#include <stdio.h>


/*
	add
	sub
	mul
	dlv
	当前的是加法/减法/乘法/除法
	输入第一个数
	输入第二个数
	a+-* / b
	结果是


*/
int main(int argc, char const *argv[])
{
	double x;
	double y;
	printf("当前是加法。\n");
	printf("请输入两个数\n");
	printf("实数x："); scanf("%lf", &x);
    printf("实数y："); scanf("%lf", &y);

    printf("%f+%f=%f\n",x,y,x+y );
	return 0;
}