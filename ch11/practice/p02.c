// /*---将代码中的常量用程序计算出来---*/

// #include <stdio.h>

// int count(const char *c) {
//     int n = 0;

//     while (*c++) {
//         n++;
//     }

//     return n;
// }

// int main(void) {
//     int i;
//     char a[][5] = {"LISP", "C", "Ada"};
//     char *p[] = {"PAUL", "X", "MAC"};

//     for (i = 0; i < count(a); i++) {
//         printf("a[%d] = \"%s\"\n", i, a[i]);
//     }

//     for (i = 0; i < count(*p); i++) {
//         printf("p[%d] = \"%s\"\n", i, p[i]);
//     }

//     return 0;
// }

#include<stdio.h>

int main(void) {
    int i, n1, n2;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"Paul", "X", "MAC"};
    n1 = sizeof(a) / sizeof(a[0]);
    n2 = sizeof(p) / sizeof(p[0]);

    for (i = 0; i < n1; i++) {
        printf("a[%d]=\"%s\"\n", i, a[i]);
    }

    for (i = 0; i < n2; i++) {
        printf("a[%d]=\"%s\"\n", i, p[i]);
    }

    return 0;
}

