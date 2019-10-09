/*---逆向显示字符串s的字符---*/

#include <stdio.h>

void rev_string(char s[]) {
    int num = 0, i = 0, temp;

    while (s [num]) {
        num++;
    }

    for (i = 0; i < num / 2; i++) {
        temp = s[i];
        s[i] = s[num - i - 1];
        s[num - i - 1] = temp;
    }

    printf("%s", s);
}

int main(void) {
    char s[128];

    printf("请输入字符串: ");
    scanf("%s", s);

    rev_string(s);
    printf("\n");

    return 0;
}

