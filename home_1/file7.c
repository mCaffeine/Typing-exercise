
//从键盘输入行数打印杨辉三角 
#include <stdio.h>

int main(void)
 {
    int a[100][100];
    int i,j,n;
    printf("输入你想打印的行数");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
     }
     for (i=2;i<n;i++)