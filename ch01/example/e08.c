#include <stdio.h>
int main(void)

{
	//声明变量名以名词开头，方法名以动词开头
	//变量名唯一且有一定的作用范围
	//以数字，字母，下划线开头，驼峰命名

	int superMan;

	//error:use of undeclared identifier 'spideMan'
	//错误:使用未声明的标识符“spideMan”
	// int spideMan=30;
	superMan=20;

	printf("%d\n",superMan+spideMan );
	return 0;
}