#include<stdio.h>
void fun1()
{
    printf("Before function inside fun1\n");
    fun2();
    printf("After function inside fun1\n");
}
void fun2()
{
    printf("function inside fun2\n");
}
int main()
{
    printf("Before Main function insid\n");
    fun1();
    printf("After Main function insidn");
    return 0;
}