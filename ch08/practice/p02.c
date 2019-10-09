/*---定义功能返回x,y中的较大值的函数式宏，并使用。---*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;

    puts("请输入4个整数：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("max(max(a,b),max(c,d))计算最大值：%d\n"
           "max(max(max(a,b),c),d)计算最大值：%d",
           max(max(a, b), max(c, d)), max(max(max(a, b), c), d));

    return 0;
}

