/*---不使用下标运算符，返回字符串s中字符c的个数---*/

#include <stdio.h>

int str_chnum(const char *s, int c) {
    int count = 0;

    while (*s) {
        if (*s == c) {
            count++;
        }

        *s++;
    }

    return count;
}

int main(void) {
    char c = 'c';
    char *s = "i love china,cc";

    printf("%d\n", str_chnum(s, c));

    return 0;
}

