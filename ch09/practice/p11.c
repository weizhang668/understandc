/*---对代码清单进行改写---*/

#include <stdio.h>

#define NUMBER 5
#define IDX_NUM 128
void put_strary(const char s[][IDX_NUM], int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }

        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void) {
    int i;

    char cs[NUMBER][IDX_NUM];

    puts("请输入五个字符串。");

    for (i = 0; i < NUMBER; i++) {
        scanf("%s", cs[i]);

        if (strcmp(cs[i], "$$$$$") == 0) {
            break;
        }
    }

    put_strary(cs, NUMBER);

    return 0;
}

