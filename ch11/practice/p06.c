/*---不使用下标运算符，若字符串s中含有字符c，则返回指向该字符的指针，否则返回空指针。---*/

#include <stdio.h>

int str_chnum(const char *s, int c) {
    int idx = 0;

    while (*s) {
        if (*s++ == c) {
            return idx;
            break;
        }

        idx++;
    }
}

int main(void) {
    char c = 'c';
    char *s = "ILOVEchina";

    printf("%d", str_chnum(s, c));

    return 0;
}

