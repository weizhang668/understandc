#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	请输入数字，1剪刀，2石头，3布
	错误的输入

	你输入的是剪刀/石头/布
	计算机输入的是剪刀/石头/布
	计算机随机产生数字
	获胜的是你/计算机

*/
int main(void) {

	int no;
	srand ((unsigned)time(NULL));
	printf("请输入一个整数：%d\n", rand());

	
    printf("hello c!\n");
    return 0;
}