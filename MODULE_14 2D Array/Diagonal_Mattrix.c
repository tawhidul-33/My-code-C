/*
3 3
1 2 3  
6 2 8 
8 7 3 
*/
#include<stdio.h>
int main()
{
  int r,c;
  scanf("%d%d",&r,&c);
//2D Array input
  int ar[r+5][c+5];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&ar[i][j]);
    }
  }

 if(r==c)
{
 for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {  if(i==j)
    {
      printf("%d ",ar[i][j]);
    }
    }
    printf("\n");
  }
 }
    return 0;
}