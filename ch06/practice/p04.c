/*---使用sqr函数创建另一个函数，返回Int型整数的四次幂。---*/

#include <stdio.h>

int sqr(int a) {
    return a * a;
}

int pow4(int x) {
    return sqr(x) * sqr(x);
}

int main(void) {
    int a;
    printf("输入一个整数：");
    scanf("%d", &a);
    printf("%d的四次幂为：%d\n", a, pow4(a));
    return 0;
}