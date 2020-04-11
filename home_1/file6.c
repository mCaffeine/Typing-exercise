
//使用冒泡排序法将数字从小到大排列
#include <stdio.h>

int main()
{
	int temp=0;
	int i=0;
	int j=0;
	int a[10];
	printf("请输入10位数字，系统将为你排序\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);