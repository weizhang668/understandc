/*---编写显示对象takao各成员地址的程序。---*/ 
 
#include <stdio.h>
 
#define NAME_LEN  64
 
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}; 
 
int main (void) 
{
	struct student takao = {"Takao", 173, 86.2};
	
	printf("姓名 = %p\n",	&takao.name);
	printf("姓名 = %d\n",	&takao.name);
	printf("身高 = %d\n",	&takao.height);
	printf("体重 = %d\n",	&takao.weight);
	printf("奖学金 = %d\n", &takao.schols);
	
	return 0;
}

