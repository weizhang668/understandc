/*---编写函数，返回字符串s中字符c的个数---*/

#include <stdio.h>

int str_chnum(const char s[], int c) {
    int num = 0, idx = 0;

    while (s[idx]) {
        if (s[idx] == 'c') {
            num++;
        }

        idx++;
    }

    return num;

    if (num == 0) {
        return 0;
    }
}

int main(void) {
    char c = 'c';

    char s[128];
    printf("请输入字符串: ");
    scanf("%s", s);

    printf("字符串%s中%c字符的个数为%d\n", s, c, str_chnum(s, c));

    return 0;
}

