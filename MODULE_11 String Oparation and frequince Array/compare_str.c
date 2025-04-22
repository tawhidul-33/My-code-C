#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="air";
    char str2[20]="apple";
    int cmp =strcmp(str2,str1);
    printf("%d",cmp);
    return 0;
}