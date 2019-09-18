#include <stdio.h>
int main(int argc, char const *argv[]) {

    int x;
	int y;

	printf("请输入两个整数。\n");
	printf("整数x:");
	scanf("%d",&x);
	printf("整数y:");
	scanf("%d",&y);



    if (x % y == 0) {
        printf("y是x的约数。");
    } else {
        printf("y不是x的约数。");
    }
    printf("\n");
    return 0;
}