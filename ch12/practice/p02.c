/*---改写程序，声明时不为其赋初始值，而且各成员的值从键盘输入。---*/

#include <stdio.h>

#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void hiroko(Student *std) {
    if (std->height < 180) { std->height = 180; }

    if (std->weight > 80) { std->weight = 80; }
}

int main(void) {
    Student sanaka;
    printf("请输入姓名,身高,体重,奖学金：");
    scanf("%s %d %f %ld", &sanaka.name, &sanaka.height, &sanaka.weight, &sanaka.schols);

    printf("姓名 = %s\n身高 = %d\n体重 = %.1f\n奖学金 = %ld\n", sanaka.name, sanaka.height, sanaka.weight, sanaka.schols);

    return 0;
}

