#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    printf("n的值：");
    scanf("%d",&n);
    int n1 = n;
    while (n>0)
    {
        sum += n;
        n--;
    }
    printf("1到%d的和是%d\n",n1,sum);
    return 0;
}
