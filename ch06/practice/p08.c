/*---创建一个函数，返回元素个数为n的int型数组v中的最小值。---*/

#include <stdio.h>
#define NUMBER 80

int min_of(const int v[], int n) {
    int min = v[0];
    v[0]=12;

    while (n-- > 0) {
        if (v[n] < min) {
            min = v[n];
        }
    }

    return min;
}

int main(void) {
    int n, v[NUMBER], i;

    printf("请输入数组的元素个数:");
    scanf("%d", &n);

    printf("请输入数组各元素的值。");

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("数组中最小元素的值为%d", min_of(v, n));

    return 0;
}