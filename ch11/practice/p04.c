/*不使用下标运算符，显示字符串s*/

#include <stdio.h>
#include <string.h>

void put_string(const char *s) {
//  int i;
//  printf("%d",strlen(s));
    while (*s) {
        printf("%c", *s++);
    }
}

int main(void) {
    char *s = "HELLOworld";

    put_string(s);

    return 0;
}

