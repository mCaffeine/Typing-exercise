
//malloc函数的使用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *p;
	p=(char *)(malloc(60*sizeof(char)));//申请内存空间 
	if(p==NULL)
	{
		printf("动态内存分配失败");
		exit(1);
	}