#include <stdio.h>
int main(void) {
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    int a = no;
    i = 1;

    while (i <= no) {
        printf("%d ", i++);
    }

    while (a >= 0) {

        printf("\n");
        break;
    }

    return 0;
}
