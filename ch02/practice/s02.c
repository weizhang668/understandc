#include <stdio.h>
int main(void) {

	int a;
	int b;

	printf("请输入两个整数。\n");
	printf("整数a:");
	scanf("%d",&a);
	printf("整数b:");
	scanf("%d",&b);


    printf("它们的和是%d，积是%d\n",a+b,a*b );
    return 0;
}