#include <stdio.h>
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
    { 
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void mat_print(const int m[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
        putchar('\n');
}
int main(void)
{
    int tensu[2][4][3] = { { { 91, 63, 78 },{ 67, 72, 46 },{ 89, 34, 53 },{ 32, 54, 34 } } ,
                           { { 97, 67, 82 },{ 73, 43, 46 },{ 97, 56, 21 },{ 85, 46, 35 } } };
    int sum[4][3];          /* 总分 */
    mat_add(tensu[0], tensu[1], sum);               /* 求两次考试中成绩的总和 */
    puts("第一次考试的分数");  mat_print(tensu[0]); /* 显示第一次考试的分数 */
    puts("第二次考试的分数");  mat_print(tensu[1]); /* 显示第二次考试的分数 */
    puts("总分");        mat_print(sum);      /* 显示总分 */
    return 0;
}

