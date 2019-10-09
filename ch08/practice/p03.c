/*---定义一个函数式宏swap(type a, b)以使type型的两值互换。---*/

#include <stdio.h>

#define swap(int, a, b)  {int x; x = a; a = b; b = x;}

int main(void) {
    int a, b;

    puts("请输入两个整数：");
    scanf("%d %d", &a, &b);

    swap(int, a, b);

    printf("%d %d", a, b);

    return 0;
}

