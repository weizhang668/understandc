#include <stdio.h>
int main(void) {
    int i, n;

    printf("n的值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        putchar('*');

        if (i % 5 == 0)
        {
            putchar('\n');
        }
    }
putchar('\n');
    return 0;
}