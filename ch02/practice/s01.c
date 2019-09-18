#include <stdio.h>
int main(void) {

	int x;
	int y;

	printf("请输入两个整数。\n");
	printf("整数x:");
	scanf("%d",&x);
	printf("整数y:");
	scanf("%d",&y);


    printf("x的值是y的%d%%\n",x*100/y );
    return 0;
}