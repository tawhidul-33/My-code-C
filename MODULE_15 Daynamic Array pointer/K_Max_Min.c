#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int *ptr1,*ptr2,*ptr3;
  ptr1=&a;
  ptr2=&b;
  ptr3=&c;
   //MIN
      if(*ptr1<*ptr2)
   {
    if(*ptr1<*ptr3)
    {
        printf("%d ",*ptr1);
    }
    else{
        printf("%d ",*ptr3);
    }
   }
   else if(*ptr2<*ptr3)
   {
    printf("%d ",*ptr2);
   }
   else{
    printf("%d ",*ptr3);
   }
  //Max
   if(*ptr1>*ptr2)
   {
    if(*ptr1>*ptr3)
    {
        printf("%d",*ptr1);
    }
    else{
        printf("%d",*ptr3);
    }
   }
   else if(*ptr2>*ptr3)
   {
    printf("%d",*ptr2);
   }
   else{
    printf("%d",*ptr3);
   }

    return 0;
}