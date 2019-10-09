#include <stdio.h>
int main(void) {
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    int a = no;

    while (no >= 0) {
        printf("%d ", no);
        no--;
    }

    while (a >= 0) {

        printf("\n");
        break;
    }

    return 0;
}