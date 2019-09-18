#include <stdio.h>
//正负数的取余
int main(void) {
    int x, y;

    x = 5;
    y = 6;

    printf("x-y=%d\n", x - y);
    printf("x+y=%d\n", x + y);
    printf("x*y=%d\n", x * y);
    //a除以b所得到的商(整数之间运算的时候需要舍弃小数点之后的值)
    printf("x/y=%d\n", x / y);
    //a除以b所得到的余数(a和b都必须是整数)
    printf("x%%y=%d\n", x % y);
    printf("x%y=%d\n", x % y);
    return 0;
}