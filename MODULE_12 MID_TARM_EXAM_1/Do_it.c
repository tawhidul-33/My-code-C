/*
3 5
*/
#include<stdio.h>
int main()
{
  int r,k;
  scanf("%d %d",&k,&r);
  for(int i=0;i<k;i++)
  {
    for(int j=1;j<=r;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
  }
    return 0;
}