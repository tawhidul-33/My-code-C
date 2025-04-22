#include<stdio.h>
/*
input
5
1 2 3 4 5
*/
int a[10000];
int main()
{
  int length;
  scanf("%d",&length);
  for(int i=0;i<length;i++)
  {
    scanf("%d",&a[i]);
  }
// a[i] arry reverse in a[i] arrey
   for(int i=0,j=length-1;i<=j;i++,j--)
  {
   int temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 // print after revers a[i] arry 
  for(int i=0;i<length;i++)
  {
    printf("%d ",a[i]);
  }



  return 0;
}