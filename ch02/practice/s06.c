#include <stdio.h>
int main(void) {

    int x;

    printf("请输入您的身高：");
    scanf("%d", &x);

    double y = (x - 100) * 0.9;

    printf("您的标准体重是%4.1f公斤。\n", y);
    return 0;
}