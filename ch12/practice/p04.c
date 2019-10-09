/*---程序改写---*/

#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    int i, j, choice;

    puts("请输入你的选择：0---按身高升序排列 1---按姓名排序");
    scanf("%d", &choice);

    if (choice == 0) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++)
                if (a[j].height > a[j + 1].height) {
                    swap_Student(&a[j], &a[j + 1]);
                }
        }
    }

    if (choice == 1) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++)
                if (a[j].name[0] > a[j + 1].name[0]) {
                    swap_Student(&a[j], &a[j + 1]);
                }
        }
    }
}

int main(void) {
    int i;
    Student std[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("请输入第%d个人信息：",i+1 );
        scanf("%s %d %f %ld", &std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }

    sort_by_height(std, NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("%s %d %f %ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    return 0;
}

