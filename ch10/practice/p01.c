#include<stdio.h>
 
void adjust_point(int *n)
{
	if (*n < 0)
		*n = 0;
	else
		if (*n > 100)
			*n = 100;
	return;
}
 
int main(void)
{
	int x;
	printf("input integer:");
	scanf("%d",&x);
	adjust_point(&x);
	printf("adjusted integer:%d\n",x);
	return 0;
}

