#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    int n = no;

    if (n <= 0) {
        printf("%d", n);

    } else {
        while (no >= 1) {
            printf("%d ", no--);
        }

        printf("\n");
    }

    return 0;
}
