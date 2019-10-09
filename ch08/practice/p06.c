/*---不使用递归调用的方式来实现函数factorial---*/
#include <stdio.h>

int factorial(int n) {
    int i, res = 1;

    for (i = n; i > 0; i--) {
        res *= i;
    }
    return res;
}

int main(void) {
    int i;

    puts("请输入一个整数：");
    scanf("%d", &i);
    printf("这个整数的阶乘等于%d\n", factorial(i));

    return 0;
}

