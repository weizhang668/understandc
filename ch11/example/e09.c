/*
显示数组元素的地址（指向元素的指针）
*/
#include <stdio.h>

int main(void) {
    int i;
    int a[5] = {7, 4, 6, 2, 5};
    int *p = a;/*p指向a[0]*/

    for (i = 0; i < 5; i++)
        // printf("&a[%d] = %p  p+%d = %p\n", i, &a[i], i, p + i);
    {
        printf("a[%d]=%d\n", i, p[i]);
        printf("%p\n",p+i);
        printf("%d\n",*p+i );
        printf("%d\n",*(p+i) );
        printf("%d\n",(*p)+i );
        printf("------------------------\n");
    }

    return 0;
}
