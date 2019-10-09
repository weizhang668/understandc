/*---输出字符数组char str[] = "ABC\0DEF"---*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC\0DEF";

    printf("字符串str为\"%s\"。\n", str);

    return 0;
}

