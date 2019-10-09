// /*---将所接收的字符串数组中存储的n个字符串的字符逆向显示。---*/

// #include <stdio.h>

// void rev_string(char s[][128], int n) {
//     int i = 0, j = 0, a = 0, temp;

//     for (i = 0; i < n; i++) {		//遍历字符串数组
//         while (s[i][j]) {
//             j++; 						//计算不同字符串的长度
//         }

//         for (a = 0; a < j / 2; a++) {		//对字符串进行逆向转换
//             temp = s[i][a];
//             s[i][a] = s[i][j - a - 1];
//             s[i][j - a - 1] = temp;
//         }
//     }

// }

// int main(void) {
//     int n = 3, i;
//     char s[][128] = {"sec", "abc", "cartman"};

//     rev_string(s, n);

//     for (i = 0; i < n; i++) {
//         printf("%s\n", s[i]);
//     }

//     return 0;
// }
#include<stdio.h>

#define NUMBER 3

void rev_string(char s[][128], int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        j = 0;

        while (s[i][j]) {
            j++;
        }

        for (k = 0; k < j / 2; k++) {
            int temp;
            temp = s[i][k];
            s[i][k] = s[i][j - k - 1];
            s[i][j - k - 1] = temp;
        }
    }
}

int main(void) {
    int i;
    char str[NUMBER][128];
    printf("请输入%d组字符串。\n", NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = ", i);
        scanf("%s", str[i]);
    }

    printf("以下为经过变换后的字符串。\n");
    rev_string(str, NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }

    return 0;
}


