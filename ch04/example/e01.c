#include <stdio.h>
int main(void) {

    int no;

    printf("do外面%d\n", no);

    do {


        int input;
        printf("请输入一个整数：");
        scanf("%d", &input);

        if (input % 2) {
            printf("输入的是奇数\n");
        } else {
            printf("输入的是偶数\n");
        }

        printf("还要继续吗？【Yes---0/No---9】:");
        // int no;
        printf("do里面未赋值%d\n", no);
        scanf("%d", &no);
        printf("do里面赋值后%d\n", no);
    }
    // printf("do外面赋值后while上%d\n", no);
    while (no == 0);
    printf("do外面赋值后while下%d\n", no);

    printf("终于好了！\n");

    return 0;
}