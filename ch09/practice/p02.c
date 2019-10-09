/*---让该初始化赋值得到的字符串s变成空字符串：char s[] = "ABC"---*/

#include <stdio.h>

int main(void) {
    char s[] = "ABC";

    s[0] = '\0';

    printf("字符串s为：%s\n", s);

    return 0;
}

