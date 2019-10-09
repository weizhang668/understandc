#include <stdio.h>
int main(void) {
    int i, j, len;
    puts("让我们来画一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j < i; j++)
        {
            putchar(' ');
        }
        for (j = 1; j <=(len-i)*2+1; j++)

        {
            printf("%d",i );
        }

        putchar('\n');

    }

    return 0;
}
