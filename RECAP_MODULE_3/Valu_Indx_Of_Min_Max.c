#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int min=a[0],max=a[0];
  for(int i=0;i<n;i++)//min & max ber korar jonno
  {
    if(a[i]<min)
    {
        min=a[i];
    }
    if(a[i]>max)
    {
        max=a[i];
    }
  }
  int min_pos=0,max_pos=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==min)
    {
        min_pos=i;
    }
    if(a[i]==max)
    {
        max_pos=i;
    }

  }
  printf("%d %d\n",min,max);
printf("%d %d\n",min_pos,max_pos);


    return 0;
}
