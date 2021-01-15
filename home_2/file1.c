//指针充当变量与数组 
#include <stdio.h>
int main(void){
    int *num = NULL;
    int *x, y[] = {12, 22,32}, z = 100;
    //下面演示，指针既可充当变量、也可充当数组
    x=&z;      //整型变量的地址赋给x
    printf("*x=%d, x[0]=%d\n", *x, x[0]);
    x 