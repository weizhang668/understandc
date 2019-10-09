/*---编写函数，若字符串s中含有字符c(若含有多个，以先出现的为准)，则返回该元素的下标。---*/

#include<stdio.h>
#include<string.h>

int str_char(const char s[], int c) {
    int i, n;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == 'c') {
            n = 0;
            break;
        } else {
            n = -1;
        }
    }

    if (n == -1) {
        i = -1;
    }

    return i;
}

int main(void) {
    char ch[128];
    int i;
    printf("请输入字符串: ");
    scanf("%s", ch);
    i = str_char(ch, 'c');

    if (i == -1) {
        printf("%s\n", "字符串中不含字符c");
    } else {
        printf("字符c的下标值为%d\n", i);
    }

    return 0;
}


