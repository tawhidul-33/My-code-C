/*
10
1 4 3 3 5 2 4 6 2 3
*/
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  int arr[n+5];
  for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
//frequincy 
int fre[100001]={0};
   for(int i=0;i<n;i++)
   {
    fre[arr[i]]+=1;
   }

  int count=0;
  for(int i=1;i<=100001;i++)
  {
    if(fre[i]==1)
    {
      count++;
    }
  }
  printf("%d",count);
    return 0;
}