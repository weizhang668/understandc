#include <stdio.h>
int main(void)
{
    int x;
    int y;

    printf("请输入两个整数。\n");
    printf("整数x:");
    scanf("%d",&x);
    printf("整数y:");
    scanf("%d",&y);



    if (x == y)
        puts("x=y");
    else if (x > y)
        puts("x > y");
    else 
    {
    	puts("x < y");
    }
        

    return 0;
}