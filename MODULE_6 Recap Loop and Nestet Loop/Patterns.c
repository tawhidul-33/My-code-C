/*
#include<stdio.h>
int main()
{
  for(int i=1;i<=10;i++)
  {
    for(int j=1;j<=i;j++)
    {
       printf("%d ",j);  
    }
   printf("\n");
  }
  
    return 0;
}
*/

/*

#include<stdio.h>
int main()
{
  for(int i=1;i<=10;i++)
  {
    for(int j=i;j>=1;j--)
    {
       printf("%d ",j);  
    }
   printf("\n");
  }
  
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  int n=10;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
       printf("%d ",j);  
    }
   printf("\n");
  }
  
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  int n=10;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
       printf(" %d",j);  
    }
   printf("\n");
  }
  
    return 0;
}
*/


#include<stdio.h>
int main()
{
  int n=10;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
       printf("*");  
    }
   printf("\n");
  }
  
    return 0;
}