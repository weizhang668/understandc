#include <stdio.h>
int main(void) {

    int x;
    int y;
    int a,b;
    int max, min, sum = 0;

    printf("请输入两个整数。\n");
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);

    if (x > y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }

    b = min;

    do {
        sum += b;
        b++;


    } while (b <= max && b >= min);

    printf("大于等于%d小于等于%d的所有整数的和是%d。\n",max,min,sum );


    return 0;
}