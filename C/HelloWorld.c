#include <stdio.h>
#include "one.c"
int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
    printf("%d",Max(2,6));
    printf("%d",Min(6,8));
    return 0;
}
int Max(int num1, int num2){
    if (num1>num2)
    {
        return num1;
    }else
    {
        return num2;
    }
}
