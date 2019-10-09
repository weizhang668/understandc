/*使用冒泡排序法，由高到低降序排列身高。*/

#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j ++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int i;
    int height[NUMBER];

    printf("请输入%d人的身高。\n", NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("%2d号：", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("%2d 号：%d\n", i + 1, height[i]);
    }

    return 0;
}

