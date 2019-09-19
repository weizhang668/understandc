#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    请输入数字，1剪刀，2石头，3布
    错误的输入

    你输入的是剪刀/石头/布
    计算机输入的是剪刀/石头/布
    计算机随机产生数字
    获胜的是你/计算机

*/
int main(void) {

    int x = 4;
    int no;
    int repet = 0;

    printf("规则：\n");
    printf("1表示剪刀\n");
    printf("2表示石头\n");
    printf("3表示布\n");
    printf("==================================\n");


    while (repet == 0) {

        printf("请输入数字：");
        scanf("%d", &x);

        if (x < 1 || x > 3) {
            printf("输入有误，请重新输入：");
            scanf("%d", &x);
        }


        while (x > 0 && x < 4) {

            srand((unsigned)time(NULL));
            printf("请输入一个整数：%d\n", rand());

            switch (rand() % 3) {
            case 0: no = 3; break;

            case 1: no = 1; break;

            case 2: no = 2; break;

            default : break;
            }

            printf("计算机随机产生数字：%d\n", no);

            switch (no) {
            case 1: printf("计算机出的是剪刀\n"); break;

            case 2: printf("计算机出的是石头\n"); break;

            case 3: printf("计算机出的是布\n"); break;
            }

            switch (x) {
            case 1: printf("你出的是剪刀\n"); break;

            case 2: printf("你出的是石头\n"); break;

            case 3: printf("你出的是布\n"); break;
            }

            if (no == 1) {
                switch (x) {
                case 1: printf("平局\n"); break;

                case 2: printf("恭喜你，你赢了！\n"); break;

                case 3: printf("很遗憾，你输了！\n"); break;

                default : break;
                }
            } else if (no == 2) {
                switch (x) {
                case 1: printf("很遗憾，你输了！\n"); break;

                case 2: printf("平局\n"); break;

                case 3: printf("恭喜你，你赢了！\n"); break;

                default : break;
                }
            } else {
                switch (x) {
                case 1: printf("恭喜你，你赢了！\n"); break;

                case 2: printf("很遗憾，你输了！\n"); break;

                case 3: printf("平局\n"); break;

                default : break;
                }
            }

            printf("是否继续游戏：【Yes---0/No---9】\n");
            scanf("%d", &repet);
            x=4;
        }
    }


    return 0;
}