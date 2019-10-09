#include <stdio.h>

int main(void)
{
    int input,output=2;

    printf("请输入一个整数：");
    scanf("%d", &input);

    while(output<input){
        printf("%d ",output );
        output=output*2;

    }
    printf("\n");
    return 0;
}