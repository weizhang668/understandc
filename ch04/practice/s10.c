#include <stdio.h>

int main(void) {
    int n1, n2 = 1;

    printf("正整数：");
    scanf("%d", &n1);

    while (n2 <= n1) {
        printf("*\n");
        n2 ++;
    }

    return 0;

}