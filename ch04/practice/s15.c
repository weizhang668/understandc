#include <stdio.h>
int main(void) {
    int stand, finish, n;

    printf("开始数值(cm)：");
    scanf("%d", &stand);
    printf("结束数值(cm)：");
    scanf("%d", &finish);
    printf("间隔数值(cm)：");
    scanf("%d", &n);



    for (int i = stand; i <= finish; i += n) {
        double s;
        s = (double)((i - 80) * 0.7);
        printf("%dcm   ", i);
        printf("%.2fkg\n", s);

    }

    return 0;
}
