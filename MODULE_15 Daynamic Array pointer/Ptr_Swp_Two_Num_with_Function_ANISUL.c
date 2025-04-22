#include<stdio.h>

void swaping(int *ptr1,int *ptr2)
{
int tmp;
tmp=*ptr1;
*ptr1=*ptr2;
*ptr2=tmp;
}

int main()
{
  int x=10,y=20;
  printf("Before Swaping: x=%d y=%d\n",x,y);
  //After Swaping
  swaping(&x,&y);
  printf("After Swaping: x=%d y=%d",x,y);
    return 0;
}