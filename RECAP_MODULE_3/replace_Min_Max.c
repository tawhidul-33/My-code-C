
/* 
input
5
4 1 3 10 9
*/
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
  int min_pos=0,max_pos=0;
  for(int i=0;i<n;i++)//min & max ber korar jonno
  {
    if(a[i]<min)
    {
        min=a[i];
        min_pos=i;
    }
    if(a[i]>max)
    {
        max=a[i];
        max_pos=i;
    }

  } 

 
    int temp = a[min_pos];
    a[min_pos]=a[max_pos];
    a[max_pos]=temp;

  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }


    return 0;
}

/*
// min max & min_pos max_pos er jonno alada alada Loop
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

    int temp = a[min_pos];
    a[min_pos]=a[max_pos];
    a[max_pos]=temp;

  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }


    return 0;
}
*/