#include <stdio.h>
int combination(int n, int r) {
    int y;

    if ((r > 1) && (r < n)) {
        y = combination(n - 1, r - 1) + combination(n - 1, r);
    } else if ((r == n) || (r == 0)) {
        y = 1;
    } else if (r == 1) {
        y = n;
    }

    return y;
}
int main(void) {
    int n, r;
    printf("n:");
    scanf("%d", &n);
    printf("r:");
    scanf("%d", &r);
    printf("combination(%d,%d) = %d\n", n, r, combination(n, r));
    return 0;
}

