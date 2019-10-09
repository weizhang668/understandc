#include <stdio.h>
int main(int argc, char const *argv[]) {
    int input;

    printf("请输入一个整数：");
    scanf("%d", &input);

    if (input % 2 == 0) {
        printf("%d是偶数。",input);
    } else {
        printf("%d不是偶数。",input);
    }

    return 0;
}