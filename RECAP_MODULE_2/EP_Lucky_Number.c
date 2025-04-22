#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a ,&b);
  int notlucky=0;
  for(int i=a;i<=b;i++)
  {
    int n =i,lucky=1;
    while(n>0)
    {
      int d=n%10;
      
      if(d!=7 && d!=4)
      {
        lucky=0;
        break;
      }
      n/=10;
    }
    if(lucky==1)
    {
      printf("%d ",i);
      notlucky=1;
    }
  }
  if(notlucky==0)
  {
    printf("-1");
  }
    return 0;
}