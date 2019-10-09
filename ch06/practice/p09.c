/*---创建一个函数，对元素个数为n的int型数组v进行倒序排列。---*/

#include <stdio.h>
#define NUM 80

void rev_intary(int v[], int n) {
    int temp, i;

//数组元素首尾交换，并且要注意循环次数
    for (i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}

int main(void) {
    int n, v[NUM], i;

    printf("请输入数组的元素个数:");
    scanf("%d", &n);

    printf("请输入数组各元素的值:");

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    rev_intary(v, n);

    puts("输出倒序：");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    putchar('\n');
    return 0;
}