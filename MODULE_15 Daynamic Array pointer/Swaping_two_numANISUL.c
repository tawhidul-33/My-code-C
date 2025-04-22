#include<stdio.h>
int main()
{
  int x=20,y=10,tmp;
//int *ptr1,*ptr2;
  int *ptr1=&x;
  int *ptr2=&y;

tmp=*ptr1;
*ptr1=*ptr2;
*ptr2=tmp;

printf("%d %d\n",*ptr1,*ptr2);
//or
printf("%d %d",x,y);

    return 0;
}