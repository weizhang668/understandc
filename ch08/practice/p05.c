/*---在程序中定义表示性别，季节等的枚举类型，并有效使用它们。---*/

#include <stdio.h>

enum sex {
    male, female
};

enum season {
    spring, summer, autumn, winter
};

int main(void) {
    printf("male为%d\nfemale为%d\nspring为%d\n"
           "summer为%d\nautumn为%d\nwinter为%d", male, female, spring, summer, autumn, winter);

    return 0;
}

