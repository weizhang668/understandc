#include <stdio.h>
#define NUM 128
int main(void)
{
	int n;
	int i;
	int v[NUM];
	printf("数据个数：");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("%d号：",i+1);
		scanf("%d",&v[i]);
	}
	printf("{");
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d,", v[i]);
		else
			printf("%d",v[i]);
	}
	printf("}\n");
	return 0;
}