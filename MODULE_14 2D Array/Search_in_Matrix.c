/*
2 2
1 2
3 4
10
*/
#include<stdio.h>
int main()
{
  int n, m;
  scanf("%d %d",&n,&m);
  int am[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&am[i][j]);
    }
  }

   int x;
   scanf("%d",&x);
   
   int count=0;
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
        if(am[i][j]==x)
        {
            count=1;
            break;
        }
        
     }
     if (count==1)
     {
        break;
     }
   }

   if(count==1)
   {
        printf("will not take number");
   }
   else
   {
    printf("will take number");
   }
    return 0;
}