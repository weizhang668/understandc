/*---从键盘输入float型，double型，long double型的变量，并显示其值。---*/

#include <stdio.h>

int main(void) {
    float fl;
    double db;
    long double ldb;

    puts("请依次输入三个浮点数：");
    scanf("%f %lf %Lf", &fl, &db, &ldb);
    printf("float型：%f\ndouble型：%f\nlong double型：%Lf\n", fl, db, ldb);

    return 0;
}

