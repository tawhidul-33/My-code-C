

#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
 
 for(int i=1;i<=n;i++)
  {
    scanf("%d",&ar[i]);
  }
    int max = INT_MIN;
    for(int i=1;i<=n;i++)
    {
    if(ar[i]>max)
    {
      max=ar[i];
    }
    }
  for(int i=1;i<=n;i++)
  {
    if(max>=ar[i])
    {
      ar[i]=max-ar[i];
    }
   printf("%d ",ar[i]);
  }
  
 
    return 0;
}

/*
//or

#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
 int max = INT_MIN;
 for(int i=1;i<=n;i++)
  {   
    scanf("%d",&ar[i]);
    if(ar[i]>max)
    {
      max=ar[i];
    }
  } 
    
  for(int i=1;i<=n;i++)
  {
    if(max>=ar[i])
    {
      ar[i]=max-ar[i];
    }
   printf("%d ",ar[i]);
  }
  
 
    return 0;
}
*/