/*---从键盘输入int型，long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。---*/

#include <stdio.h>

struct xyz {
    int a;
    double b;
    long c;
};

struct xyz scan_xyz(int a, double b, long c) {
    struct xyz s1;

    s1.a = a;
    s1.b = b;
    s1.c = c;

    return s1;
}

int main(void) {
    int a;
    double b;
    long c;
    struct xyz s2 = {
        0, 0, 0
    };
printf("请依次输入int,long,double:");
    scanf("%d %lf %ld", &a, &b, &c);

    s2 = scan_xyz(a, b, c);

    printf("%d %f %ld", s2.a, s2.b, s2.c);

    return 0;
}

