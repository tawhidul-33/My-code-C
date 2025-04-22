#include<stdio.h>
int arr[100000];
int sum;

void goToIndex(int i,int n)
{
    if(i==n)
    {
        return;
    }
 sum+=arr[i];
 
 goToIndex( i+1, n);
printf("%d",sum);
 
}


int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  sum=0;
  goToIndex(0,n);
  
    return 0;
}