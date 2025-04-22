#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
 int *p1,*p2,sum;
 p1=&a;
 p2=&b;
sum=*p1+*p2;
printf("%d",sum);
    return 0;
}