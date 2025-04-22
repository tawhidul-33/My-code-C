/*
2 5 4 6
8 6 7 5
4 2 3 1
*/
#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int arr[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  } 
//Colum swp
   for(int i=0;i<n;i++)//loop at Row
  {
    int tmp;
    tmp=arr[i][0];
    arr[i][0]=arr[i][m-1];
    arr[i][m-1]=tmp;  
  }
//Row swp
   for(int j=0;j<m;j++)//loop at Colum
  {
    int tmp;
    tmp=arr[0][j];
    arr[0][j]=arr[n-1][j];
    arr[n-1][j]=tmp;  
  }
//print after swaping
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  } 
    return 0;
}
