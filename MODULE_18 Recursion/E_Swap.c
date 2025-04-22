#include<stdio.h>

int swp(int *x,int *y)
{
  int tem=*x;
  *x=*y;
  *y=tem;
  return *x,*y;
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  swp(&a,&b);
  printf("%d %d",a,b);

    return 0;
}