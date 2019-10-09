#include<stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}


void sort3(int *n1, int *n2, int *n3) {
    if (*n1 > *n2) {
        swap(n1, n2);

        if (*n1 > *n3) {
            swap(n1, n3);

            if (*n2 > *n3) {
                swap(n2, n3);
            }
        } else {
            if (*n2 > *n3) {
                swap(n2, n3);
            }
        }
    } else {
        if (*n2 > *n3) {
            swap(n2, n3);

            if (*n1 > *n2) {
                swap(n1, n2);
            }
        }
    }
}

int main(void) {
    int i, j, k;

    while (1) {						//加个循环为了方便验证
        printf("请输入第一个数");
        scanf("%d", &i);
        printf("请输入第二个数");
        scanf("%d", &j);
        printf("请输入第三个数");
        scanf("%d", &k);
        sort3(&i, &j, &k);
        printf("三个整数按升序排列为%d,%d,%d\n", i, j, k);
    }

    return 0;
}

