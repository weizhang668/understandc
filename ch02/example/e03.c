#include <stdio.h>
int main(int argc, char const *argv[]) {

	int input;

	printf("请输入一个整数：");
	scanf("%d",&input);
	//取整数的最后一位
	int s=input%10;
	//取整数除最后一位的其他位
	int k=input/10;



    printf("%d\n", s);
    printf("%d\n", k);
    

  
    return 0;
}