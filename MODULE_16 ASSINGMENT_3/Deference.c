/*
6 10
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,m;
  int *ptr1,*ptr2;
  ptr1=&n;
  ptr2=&m;
  scanf("%d %d",ptr1,ptr2);
  int def= *ptr1-*ptr2;
  printf("%d",abs(def));

    return 0;
}