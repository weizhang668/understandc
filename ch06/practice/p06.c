/*---创建一个函数，连续发出n次响铃。---*/
 
#include <stdio.h>
 
void alert (int n){
	while (n-- > 0){
		puts("\a");
	}
}
 
int main(void)
{
	int n;
	printf("输入响铃次数：");
	scanf("%d",&n);
	alert(n);
	
	return 0;
}