/*---创建一个函数，使用辗转相除法求出两个整数值x和y的最大公约数。---*/

#include <stdio.h>

int gcd(int x, int y) {
    int temp;

    if (x < y) {
        temp = y;
        y = x;
        x = temp;
    }

    while (x % y) {
        y = x % y;
    }

    return y;
}

int main(void) {
    int a, b;
    printf("%s\n", "输入两个数：");
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;
}

