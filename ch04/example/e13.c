#include <stdio.h>
//倒序打印整数
int main(void) {
    int input;
    int no;

    printf("请输入一个整数：");
    scanf("%d", &input);

    while (input>0) {
        no = input % 10;
        printf("%d", no);
        input = input / 10;

    }
    printf("\n");

    return 0;
}