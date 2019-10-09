#include <stdio.h>
#define NUM 7
int main(void)
{
	int i;
	int x[NUM];					/* int[7] 数组 */
	for (i = 0; i < NUM; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	for (i = 0; i < NUM/2; i++) {	/* 对数组元素进行倒序排列 */
		int temp = x[i];
		x[i] = x[NUM - 1 - i];
		x[NUM - 1 - i] = temp;
	}
	puts("倒序排列了。");
	for (i = 0; i < NUM; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);
	return 0;
}