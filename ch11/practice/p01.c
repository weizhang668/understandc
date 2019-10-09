/*---将代码清单进行修改---*/

#include <stdio.h>

int main(void) {
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456" + 1;
    printf("p = \"%s\"\n", p);

    return 0;
}

