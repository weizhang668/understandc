#include<stdio.h>
#define NUMBER 10

void intary_rcpy(int v1[], const int v2[], int n) {
    int i;
    int temp;

    for (i = 0; i <= n / 2; i++) {
        temp = v2[i];
        v1[i] = v2[n - i - 1];
        v1[n - i - 1] = temp;
    }
}

int main(void) {
    int i;
    int n1[NUMBER];
    int n2[NUMBER];
    int n;

    do {
        printf("请输入元素个数n:");
        scanf("%d", &n);

    } while (n < 0 || n > 10);


    for (i = 0; i < n; i++) {
        printf("第%d个数字为：", i + 1);
        scanf("%d", &n2[i]);
    }

    printf("倒叙排放为\n");
    intary_rcpy(n1, n2, n);

    for (i = 0; i < n; i++) {
        printf("第%d个数字为：%d\n", i + 1, n1[i]);
    }

    return 0;
}

