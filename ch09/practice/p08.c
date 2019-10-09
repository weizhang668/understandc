/*---编写函数，实现字符串的逆向输出。---*/

#include <stdio.h>

void put_stringr(const char s[]) {
    int num = 0, i = 0;

    while (s [num]) {
        num++;
    }

    while (i < num) {
        putchar(s[num - i - 1]);
        i++;
    }
}

int main(void) {
    char s[128];

    printf("请输入字符串: ");
    scanf("%s", s);


    put_stringr(s);
    printf("\n");

    return 0;
}

