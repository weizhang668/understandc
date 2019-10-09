/*---不使用下标运算符，实现str_tpupper函数和str_tolower函数。---*/
 
#include <stdio.h>
 
void str_toupper (char *s) {
    int i = 0;
    while (*s) {
        *s = toupper(*s);
        *s++;
    }
}
 
void str_tolower(char *s) {
    int i = 0;
    while (*s) {
        *s = tolower(*s);
        *s++;
    }
}
 
int main (void) {
    char str[128];
    
    printf("请输入字符串：");
    scanf("%s", str);
    
    str_toupper(str);
    printf("大写字母：%s\n", str);
    
    str_tolower(str);
    printf("小写字母：%s\n", str);
    
    return 0;
}

