/*
2 3 3//row,colum,test_element_songkha
1 2 5
2 6 4
2\
6 |test_elements
7/
*/
#include<stdio.h>
int main()
{
  int n,m,s;
  scanf("%d%d%d",&n,&m,&s);
//Matrix input
  int arr[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }

//Test elements input and testing
int x,count=0; 
 for(int k=0;k<s;k++)
  {
    scanf("%d",&x);


    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(arr[i][j]==x){
          count++;

        }
      }
    }


    printf("%d\n",count);
    count=0; 
  }
  
    return 0;
}