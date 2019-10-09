#include<stdio.h>
#define NUMBER 10

int search_idx(const int v[], int idx[], int key, int n) {
    int i;
    int j = 0;

    for (i = 0; i < n ; i++) {
        if (v[i] == key) {
            idx[j] = v[i];
            j++;
        }
    }

    return j;
    // p = &j;
    // return *p;
}

int main(void) {
    int i;
    int n1[NUMBER];
    int n2[NUMBER];
    int n;
    int key;
    int j;

    do {
        printf("请输入1~%d内的元素个数n:", NUMBER);
        scanf("%d", &n);

    } while (n < 0 || n > 10);

    printf("请输入key:");
    scanf("%d", &key);


    for (i = 0; i < n; i++) {
        printf("第%d个数字为：", i + 1);
        scanf("%d", &n2[i]);
    }

    j=search_idx(n2, n1, key, n);

    if (key == 0) {
        printf("数组n2中没有与key相等的元素。\n");
    } else {
        printf("和key相等的元素的个数为%d。\n",j);
        printf("数组n1中元素为:");

        for (i = 0; i < j; i++) {
            printf("%d,", n1[i]);

        }
    }

    return 0;
}

