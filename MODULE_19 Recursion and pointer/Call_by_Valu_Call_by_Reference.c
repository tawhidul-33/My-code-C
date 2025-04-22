#include<stdio.h>
void call(int x,int*y)
{
//call by valu
   x=x*2;
//call by reference
  *y=*y*2;
printf("%d %d\n",x,*y);//aikhane valu && reference kaj lorche
}
int main()
{
  int a=10,b=30;
  call(a,&b);
  printf("%d %d",a,b);//aikhane valu kaj lore nai 
                      //but reference korche 

    return 0;
}