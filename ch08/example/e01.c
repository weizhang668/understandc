#include <stdio.h>
#define sqr(a,b) ((a)*(b))

int main(void)
{
    int n,m;
    double x;

    printf("请输入一个整数：");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("该数的平方是%d\n", sqr(n,m));

    printf("请输入一个实数：");
    scanf("%lf", &x);
    printf("该数的平方是%f\n", sqr(x,x));

    return 0;
}
