#include <stdio.h>

int main(int argc, char const *argv[]) {

    int input1;
    int input2;
    int input3;

    printf("请输入三个整数。\n");
    printf("整数1：");
    scanf("%d", &input1);
    printf("整数2：");
    scanf("%d", &input2);
    printf("整数3：");
    scanf("%d", &input3);

    printf("他们的和是%d\n", input1 +input2+input3);


    return 0;
}