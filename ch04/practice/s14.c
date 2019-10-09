#include <stdio.h>
int main(void) {
    int n;
    int x = 1;
    printf("请输入一个整数：");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("%d", x++);

        if (x == 10) {
            x = 0;
        }
    }

    putchar('\n');
    return 0;
}
