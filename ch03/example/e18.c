#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num % 3 == 0){
        printf("该数能被3整除。");
    }
    else if (num % 3 == 1){
        printf("该数除以3的余数是1。");
    }
    else {
        printf("该数除以3的余数是2。");
    }

    printf("\n");

    return 0;
}