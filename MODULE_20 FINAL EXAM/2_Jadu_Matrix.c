/*
6 6
1 0 0 0 0 1 
0 1 0 0 1 0 
0 0 1 1 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
1 0 0 0 0 1 
*/
#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n ,&m);
  int ar[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&ar[i][j]);
    }
  }
  if(n==m)
  {
    int flag=1;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(i==j)
        {
          if(ar[i][j]!=1)
          {
            flag=0;
              break;
          }
        }
        else if(i+j==n-1)
        {
          if(ar[i][j]!=1)
          {
            flag=0;
            break;
          }
        }
        else
        {
          if(ar[i][j]!=0)
          {
            flag=0;
            break;
          }
        }
     }
      if(flag==0)
      {
        break;
      }
   }
    if(flag==1)
    {
      printf("YES");
    }
    else
    {
     printf("NO");
    }
 }
  else
  {
    printf("NO");
  }
    return 0;
}