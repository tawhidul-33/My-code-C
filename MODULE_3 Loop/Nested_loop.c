/*
#include<stdio.h>
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=3;j++)
    {
        printf("* ");
    }
    printf("\n");
  }
    return 0;
}
*/

#include<stdio.h>
int main()
{
  for(int i=1;i<=12;i++)
  {
    for(int j=1;j<=60;j++)
    {
        for(int s=1;s<=60;s++)
        {
        printf("%d hour: %d minute: %d secound:\n",i,j,s);
        }
        printf("\n");
    }
    printf("\n");
  }
    return 0;
}
