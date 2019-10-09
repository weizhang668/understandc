#include <stdio.h>

int main(void) {
    int n1, n2 = 1;

    printf("正整数：");
    scanf("%d", &n1);

    if (n1 % 2==0) {
        while (n2 <= n1) {
            putchar('+');
            putchar('-');
            n2 += 2;
        }
    } else {

        while (n2 <= (n1 - 2)) {
            putchar('+');
            putchar('-');
            n2 += 2;
        }

        putchar('+');
    }

    putchar('\n');

    return 0;

}