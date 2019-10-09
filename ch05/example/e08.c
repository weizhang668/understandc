#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[2]={1,2};
	int b[2]={3,4};
	int c;

	for (int i = 0; i < 2; i++)
	{
		c=a[i];
		a[i]=b[i];
		b[i]=c;

		printf("a[%d]=%d",i,a[i] );
		printf("b[%d]=%d\n",i,b[i] );

	}


	return 0;
}