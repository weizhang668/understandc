#include <stdio.h>
int main(void) {

    int x;
    int y;

    printf("请输入两个整数。\n");
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);


    // x=(double)x;

    // x=5.0;

    // printf("%d\n",x );



    printf("x的值是y的%f%%\n", ((double)x / y * 100));
    return 0;
}