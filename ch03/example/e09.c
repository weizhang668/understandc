#include <stdio.h>
int main(void)

{
    int input1;
    int input2;
    double y;
    double X;

    printf("请输入第一个数字：");
    scanf("%d",&input1);

    printf("请输入第二个数字：");
    scanf("%d",&input2);

    int z=input2+input1;
    double xx=(input1+input2)/2.0;
    double yy=(double)(input1+input2)/2;

    y=(double)(input1+input2)/2;
    X=(input1+input2)/2.0;

    printf("平均数：%f\n", y);
    printf("平均数：%f\n", X);
    printf("平均数：%f\n", xx);
    printf("平均数：%f\n", yy);
    printf("和：%d\n", z);
}