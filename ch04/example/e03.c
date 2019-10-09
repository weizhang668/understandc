#include <stdio.h>

int main(int argc, char const *argv[]) {
    int x, y;
    printf("请输入两个数：");
    scanf("%d %d", &x, &y);

    if (x - y > 0) {
        printf("%d大于%d\n", x, y);
    } else {
        printf("%d大于%d\n", y, x);
    }

    return 0;
}