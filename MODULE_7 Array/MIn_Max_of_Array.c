#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];

  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }

  int min = INT_MAX,max = INT_MIN;
  for(int i=0;i<n;i++)
  {
    if( a[i] < min)
    {
        min = a[i];
    }
    if( a[i] > max)
    {
        max = a[i];
    }
  }
  printf("Maximum = %d\nMinimum = %d",max, min);
    return 0;
}
/*
#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];

  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }

  int min = a[0],max = a[0];
  for(int i=0;i<n;i++)
  {
    if( a[i] < min)
    {
        min = a[i];
    }
    if( a[i] > max)
    {
        max = a[i];
    }
    
    //Optional--dile vitorer... 
    //sompunno prosesing dekha jabe
    printf("Maximum = %d\nMinimum = %d",max, min);
  }
    printf("Maximum = %d\nMinimum = %d",max, min);
    return 0;
}
*/