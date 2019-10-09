/*
    自动存储期和静态存储期
*/
#include <stdio.h>

int fx = 0;
static int bx=0;

void func(void)
{
    static int sx = 0;
    int ax = 0;

    printf("%3d%3d%3d%3d\n", ax++, sx++, fx++,bx++);
}

int main(void)
{
    int i;

    puts(" ax sx fx bx");
    puts("----------");
    for (i = 0; i < 10; i++)
        func();
    puts("----------");

    return 0;
}