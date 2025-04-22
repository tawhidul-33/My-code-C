#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int oddcount=0,evencount=0,poscount=0,negcount=0;
  for(int i=1;i<=n;i++)
  {
    int x;
    scanf("%d",&x);
    if(x%2==0)
    {
        oddcount ++;
    }
    else
    {
        evencount ++;
    }

    if(x>0)
    {
        poscount++;
    }
    else if(x<0)
    {
        negcount++;
    }

  }
  printf("%d %d %d %d",oddcount,evencount,poscount,negcount);

    return 0;
}