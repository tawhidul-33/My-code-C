#include<stdio.h>
void swap(int *x,int*y)
{
    int tem=*x;
    *x=*y;
    *y=tem;
   

}
int main()
{ 
    int a=30,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
  
    return 0;
}