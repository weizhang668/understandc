/*横向显示代码，以0.01为单位将float型变量由0.0递增为1.00的过程。*/

#include <stdio.h>

int main(void) {
    int i;
    float x, j = 0;

    for (i = 0; i <= 100; i++) {
        printf("x = %f  ", j);
        j += 0.01;
        x = i / 100.0;
        printf("x = %f\n", x);
    }

    return 0;
}

