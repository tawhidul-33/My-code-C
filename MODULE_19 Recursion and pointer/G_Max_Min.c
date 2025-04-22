/*
5
10 13 95 1 3
*/
#include<stdio.h>
int  min_fun(int ar[],int n)
{
  int min=100000;
  for(int i=0;i<n;i++)
  {
    if(ar[i]<min)
    {
      min=ar[i];
    }
  }
  return min;
}

int  max_fun(int ar[],int n)
{
  int max=0;
  for(int i=0;i<n;i++)
  {
    if(ar[i]>max)
    {
      max=ar[i];
    }
  }
  return max;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
 int minimum = min_fun(ar,n);
 int maximum= max_fun(ar,n);\
 printf("%d %d",minimum,maximum);
    return 0;
}