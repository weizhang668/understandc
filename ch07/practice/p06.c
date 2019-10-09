/*---编程确认对无符号整数执行算术运算不会发生数据溢出。---*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    unsigned i, j;

    printf("无符号整型的最大值为： %u\n", UINT_MAX);

    puts("请输入一个整型数：");
    scanf("%u", &i);

    printf("将无符号整形最大值与输入整型数相加：%u\n", UINT_MAX + i);

    return 0;
}

