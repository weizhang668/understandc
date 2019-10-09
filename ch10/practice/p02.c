#include<stdio.h>

void decrement_date(int *y, int *m, int *d) { //前一天
    if (*y % 4 == 0) {
        if (*m == 1 && *d == 1) {
            *m = 12;
            *d = 31;
        } else if (*m == 2 && *d == 1) {
            *m = 1;
            *d = 31;
        } else if (*m == 3 && *d == 1) {
            *m = 2;
            *d = 29;
        } else if (*m == 4 && *d == 1) {
            *m = 3;
            *d = 31;
        } else if (*m == 5 && *d == 1) {
            *m = 4;
            *d = 30;
        } else if (*m == 6 && *d == 1) {
            *m = 5;
            *d = 31;
        } else if (*m == 7 && *d == 1) {
            *m = 6;
            *d = 30;
        } else if (*m == 8 && *d == 1) {
            *m = 7;
            *d = 31;
        } else if (*m == 9 && *d == 1) {
            *m = 8;
            *d = 31;
        } else if (*m == 10 && *d == 1) {
            *m = 9;
            *d = 30;
        } else if (*m == 11 && *d == 1) {
            *m = 10;
            *d = 31;
        } else if (*m == 12 && *d == 1) {
            *m = 11;
            *d = 30;
        } else {
            --*d;
        }
    } else {
        if (*m == 1 && *d == 1) {
            *m = 12;
            *d = 31;
        } else if (*m == 2 && *d == 1) {
            *m = 1;
            *d = 31;
        } else if (*m == 3 && *d == 1) {
            *m = 2;
            *d = 28;
        } else if (*m == 4 && *d == 1) {
            *m = 3;
            *d = 31;
        } else if (*m == 5 && *d == 1) {
            *m = 4;
            *d = 30;
        } else if (*m == 6 && *d == 1) {
            *m = 5;
            *d = 31;
        } else if (*m == 7 && *d == 1) {
            *m = 6;
            *d = 30;
        } else if (*m == 8 && *d == 1) {
            *m = 7;
            *d = 31;
        } else if (*m == 9 && *d == 1) {
            *m = 8;
            *d = 31;
        } else if (*m == 10 && *d == 1) {
            *m = 9;
            *d = 30;
        } else if (*m == 11 && *d == 1) {
            *m = 10;
            *d = 31;
        } else if (*m == 12 && *d == 1) {
            *m = 11;
            *d = 30;
        } else {
            --*d;
        }
    }
}

void increment_date(int *y, int *m, int *d) { //后一天
    if (*y % 4 == 0) {
        if (*m == 1 && *d == 31) {
            *m = 2;
            *d = 1;
        } else if (*m == 2 && *d == 29) {
            *m = 3;
            *d = 1;
        } else if (*m == 3 && *d == 31) {
            *m = 4;
            *d = 1;
        } else if (*m == 4 && *d == 30) {
            *m = 5;
            *d = 1;
        } else if (*m == 5 && *d == 31) {
            *m = 6;
            *d = 1;
        } else if (*m == 6 && *d == 30) {
            *m = 7;
            *d = 1;
        } else if (*m == 7 && *d == 31) {
            *m = 8;
            *d = 1;
        } else if (*m == 8 && *d == 31) {
            *m = 9;
            *d = 1;
        } else if (*m == 9 && *d == 30) {
            *m = 10;
            *d = 1;
        } else if (*m == 10 && *d == 31) {
            *m = 11;
            *d = 1;
        } else if (*m == 11 && *d == 30) {
            *m = 12;
            *d = 1;
        } else if (*m == 12 && *d == 31) {
            *m = 1;
            *d = 1;
        } else {
            ++*d;
        }
    } else {
        if (*m == 1 && *d == 31) {
            *m = 2;
            *d = 1;
        } else if (*m == 2 && *d == 28) {
            *m = 3;
            *d = 1;
        } else if (*m == 3 && *d == 31) {
            *m = 4;
            *d = 1;
        } else if (*m == 4 && *d == 30) {
            *m = 5;
            *d = 1;
        } else if (*m == 5 && *d == 31) {
            *m = 6;
            *d = 1;
        } else if (*m == 6 && *d == 30) {
            *m = 7;
            *d = 1;
        } else if (*m == 7 && *d == 31) {
            *m = 8;
            *d = 1;
        } else if (*m == 8 && *d == 31) {
            *m = 9;
            *d = 1;
        } else if (*m == 9 && *d == 30) {
            *m = 10;
            *d = 1;
        } else if (*m == 10 && *d == 31) {
            *m = 11;
            *d = 1;
        } else if (*m == 11 && *d == 30) {
            *m = 12;
            *d = 1;
        } else if (*m == 12 && *d == 31) {
            *m = 1;
            *d = 1;
        } else {
            ++*d;
        }
    }
}

int main(void) {
    int i, j, k;
    printf("请输入年份：");		scanf("%d", &i);
    printf("请输入月份：");		scanf("%d", &j);
    printf("请输入日期：");		scanf("%d", &k);
    /*输入还可以这样写，但是不如上面易读
    printf("请输入的日期\n");
    scanf("%d",&i);
    getchar();
    scanf("%d",&j);
    getchar();
    scanf("%d",&k);
    */
    printf("---------------\n");
    printf("输入的日期为%d年%d月%d日\n", i, j, k);
    increment_date(&i, &j, &k);
    printf("它的后一天为%d年%d月%d日\n", i, j, k);
    decrement_date(&i, &j, &k);
    decrement_date(&i, &j, &k); //因为函数increment_date已经将日期调后一天，这里面调用两次就是将日期调到前一天
    printf("它的前一天为%d年%d月%d日", i, j, k);
    return 0;
}
