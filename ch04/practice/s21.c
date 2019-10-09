#include <stdio.h>
int main(void) {
    int n ;

    printf("生成一个正方形\n");
    printf("正方形有几层：");
    scanf("%d", &n);

    for (int i = 0; i <n; i ++) {

        for (int j = 0; j < n; ++j) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}