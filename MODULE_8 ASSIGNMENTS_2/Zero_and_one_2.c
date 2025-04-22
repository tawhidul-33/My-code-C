#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }

  
  scanf("%d",&x);
  if(ar[x-1]==0)
  {
    ar[x-1]=1;
  }
  else if(ar[x-1]==1)
  {
    ar[x-1]=0;
  }


  for(int i=0;i<n;i++)
  {
   printf("%d ",ar[i]);
  }
  
    return 0;
}