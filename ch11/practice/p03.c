/*------*/

#include <stdio.h>

void str_copy(char *d, const char *s) {
    char *t = d;

    while (*d++ = *s++)
        ;

    printf("%s\n", t);
}

int main(void) {
    char str[128] = "ABC";
    char tmp[128];

    printf("str = \"%s\"\n", str);

    printf("复制的是：", tmp);
    scanf("%s", tmp);

    puts("复制了。");
    str_copy(str, tmp);

    return 0;
}

