/*---创建一个函数，返回int型整数的立方。---*/

#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) {
    int a;
    printf("输入一个整数：");
    scanf("%d", &a);
    printf("%d的立方为：%d\n", a, cube(a));

    return 0;
}