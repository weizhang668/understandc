/*---求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。---*/
 
#include <stdio.h>
 
#define a 3
#define b 4
 
int main(void)
{
    int la[a][b], lb[b][a], i, j;
    
    printf("请输入一个3行4列矩阵的值。");
    
    for(i = 0; i < a; i++){
        printf("第%d行：",i+1);
        for(j = 0; j < b; j++){
            scanf("%d",&la[i][j]);
        }
    }
    
    printf("请输入一个4行3列矩阵的值。");
    
    for(i = 0; i < b; i++){
        printf("第%d行：",i+1);
        for(j = 0; j < a; j++){
            scanf("%d",&lb[i][j]);
        }
    }
 
    for(i = 0; i < a; i++){
        printf("第%d行：",i+1);
        for(j = 0; j < b; j++){
            printf("%d ",la[i][j]*lb[j][i]);
        }
    }
    printf("\n");
    return 0;
 } 