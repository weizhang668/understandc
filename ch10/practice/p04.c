#include<stdio.h>
#define NUM 80

void set_idx(int *v, int n) {
    int i;

    for (i = 0; i < n; i++) {
        v[i] = i;
    }

    return;
}
int main(void) {
    int i,n;
    int a[NUM];
    do{
    	printf("请输入1~%d整数n：",NUM );
    	scanf("%d",&n);
    }while(n<0||n>NUM);
    
    set_idx(a, n);

    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

