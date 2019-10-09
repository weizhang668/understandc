#include <stdio.h>

/*
    定义较大的数组长度
    输入一个整数
    输入相同个数的成绩
    取出>=60的成绩并打印


*/


#define ARRAYLENGTH 80

int main(void) {

    int array[ARRAYLENGTH];
    int input;


    printf("请输入总人数：");
    scanf("%d", &input);

    printf("请依次输入%d位学生的成绩：\n",input );
    for (int i = 0; i < input; ++i)
    {
        
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < input; ++i)
    {
        if (array[i]>=60)
        {
            printf("成绩%d,及格了！\n",array[i]);
        }else{
            printf("成绩%d，很遗憾不及格！\n",array[i]);
        }
    }

    return 0;
}