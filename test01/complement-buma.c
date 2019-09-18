#include<stdio.h>
#include<memory.h>
#include<string.h>
#include<stdlib.h>

int arr[8];    //范围为 -128 ~ +127

void Complement(int number) {  //求负数补码
    number = abs(number);  //取绝对值
    int i = 7;

    while (number != 0) { //求出其绝对值原码
        arr[i] = number % 2;
        i--;
        number /= 2;
    }

    for (i = 7; i >= 0; i--) {
        if (arr[i] == 1) {
            int j;

            for (j = 0; j < i; j++) //取反
                if (arr[j] == 1) {
                    arr[j] = 0;
                } else {
                    arr[j] = 1;
                }

            break;
        }
    }

    for (i = 0; i <= 7; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");
    memset(arr, 0, sizeof(arr));  //重置数组
}

int main() {
    int i;

    for (i = -128; i <= -1; i++) { // 求 -128 ~ -1 的补码
        Complement(i);
    }

    return 0;
}