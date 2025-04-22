#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   int am[n][n];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
      scanf("%d",&am[i][j]);   
     }
   }

    int prime_dialog_sum = 0,secound_dialog_sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(i==j)
          {
            prime_dialog_sum+=am[i][j];
          }
          if(i+j==n-1)
          {
            secound_dialog_sum+=am[i][j];
          }  
        }
    }
    int def = abs(prime_dialog_sum-secound_dialog_sum);
    printf("%d",def);


    return 0;
}