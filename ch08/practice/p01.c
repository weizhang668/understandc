/*---定义一个函数式宏diff(x,y),返回x,y二值之差。---*/

#include <stdio.h>

#define diff(x,y) ((x > y) ? (x - y) : (y - x))

int main(void) {
    int x, y;

    puts("请输入两个整数：");
    scanf("%d %d", &x, &y);
    printf("%d", diff(x, y));

    return 0;
}

