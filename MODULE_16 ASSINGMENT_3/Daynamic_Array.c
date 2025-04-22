/*
5
1 4 2 6 9
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);

  int *arr;
  arr=(int*)calloc(n,sizeof(long long));
  for(int i=0;i<n;i++)
  {
    scanf("%d",arr+i);
    printf("%d ",*(arr+i));
  }
    return 0;
}