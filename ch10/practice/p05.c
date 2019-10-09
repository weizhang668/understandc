/*
数组的传递
*/
#include <stdio.h>

/*将数组v的开头的n个元素赋值val*/
void ary_set(int v[], int n, int val) {
    int i;

    for (i = 0; i < n; i++) {
        v[i] = val;
    }
}

/*
void ary_set(int *v, int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        *(v + i) = val;
}
*/

int main(void) {
    int i;
    int a[] = {1, 2, 3, 4, 5};

    ary_set(&a[2], 2, 99);
    //起始位置为a[2]的地址，n变为2，就相当于走两步，将数组中的a[2],a[3]变为99，其它的则无变化。

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}