#include <stdio.h>
int main(void) {
    int i , j;

    printf("    |");


    for (int n = 1; n <= 9; ++n) {
        printf("%3d", n);
    }
    putchar('\n');
    printf("--------------------------------------\n");

    for (i = 1; i <= 9; i ++) {
        printf("%3d |", i);

        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }

        putchar('\n');
    }

    return 0;
}