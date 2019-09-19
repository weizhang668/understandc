#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("请输入两个整数：");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);


    int n3;

    if (n1 > n2) {
        n3 = n1 - n2; //语句【1】
    } else {
        n3 = n2 - n1; //语句【2】
    }

    if (n3 < 10 || n3 == 10) {
        printf("它们的差小于等于10。\n");
    } else {
        printf("它们的差大于等于11。\n");
    }

    return 0;
}
