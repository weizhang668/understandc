#include <stdio.h>
// static int n;
int n = 0;
int put_count(void) {
    return n++;
    // n++;
}
int main(void) {
    // static int n=0;
    put_count();
    printf("put_count:第%d次\n", n);
    put_count();
    printf("put_count:第%d次\n", n);
    put_count();
    printf("put_count:第%d次\n", n);
    return 0;
}