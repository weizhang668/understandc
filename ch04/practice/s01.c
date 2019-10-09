#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no != 0) {
        if (no > 0) {
            puts("该整数为正数");
            printf("请输入一个整数：");
            scanf("%d", &no);
        } else {
            puts("该整数为负数");
            printf("请输入一个整数：");
            scanf("%d", &no);
        }
    }

    printf("输入整数为0，退出！\n");

    return 0;
}