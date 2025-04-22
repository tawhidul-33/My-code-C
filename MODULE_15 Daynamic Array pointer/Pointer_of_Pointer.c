#include<stdio.h>
int main()
{
  int a=5;
  int *x=&a;
  int **y=&x;
  printf("%d %d\n",**y,*x);
  printf("%d %d %d",*y,&a,x);// address 
    return 0;
}