#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d %d",&n,&x);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  // The'x'is frequincy valu
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(x==a[i])
    {
        count++;
    }
   
  }
 printf("%d",count);

    return 0;
}