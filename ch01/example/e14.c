#include <stdio.h>
//键盘输入两个数字，输出和
int main(void)

{
    //&:地址符
    //TODO
    //FIXME
    int input1;
    int input2;

    printf("请输入第一个数字：");
    scanf("%d",&input1);

    printf("请输入第二个数字：");
    scanf("%d",&input2);

    //scanf("%d,%d",&input1,&input2);
    //scanf("%d %d",&input1,&input2);

    printf("input1+input2=%d\n", input1+input2);


    return 0;
}