#include <stdio.h>
int main(void)
{
    int i , j;
    int height, width;
    int x,y;

    puts("让我们来画一个长方形。");
    printf("一边："); scanf("%d", &x);
    printf("另一边："); scanf("%d", &y);
    if (x>y)
    {
        width=x;
        height=y;
    }else{
        width=y;
        height=x;
    }

    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}