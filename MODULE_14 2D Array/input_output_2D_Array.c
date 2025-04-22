/*
3 4/- row and colam
1 2 3 4 
6 2 8 5
8 7 3 6
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

// valu change 
  ar[2][3]=200;


//2D Array Output
for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        printf("%d ",ar[i][j]);
    }
    printf("\n");
  }

    return 0;
}