#include <stdio.h>
int main(void) {
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);

    int n = no;

    while (no-- > 0) {
        putchar('*');
    }

    // do {
    //     putchar('\n');
    //     break;
    while (n >= 1){
        putchar('\n');
        break;
    }


    return 0;
}