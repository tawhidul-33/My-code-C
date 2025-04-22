/*
3 
1 0 0  
0 1 0 
0 0 1 
*/

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ma[n+5][n+5];

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        scanf("%d",&ma[i][j]);

    }
  }
  int flag=1,element=ma[0][0];
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
            if(ma[i][j]!=element)
            {
                flag=0;
                break;
            }
        }
        else
        {
            if(ma[i][j]!=0)
            {
               flag=0;
               break;
            }

        }
    }

  }
  if(flag==1)
  {
    printf("scaler");
  }
  else{
    printf("Not scaler");
  }


    return 0;
}