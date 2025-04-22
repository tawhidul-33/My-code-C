
/*
10 5
1 2 3 3 5 3 2 1 5 3
*/
#include<stdio.h>
int main()
{
  int n, m;
  scanf("%d %d",&n,&m);
  int  ar[n+5];
  int f[100005];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
   f[ar[i]]+=1;

  }
  
  for(int i=1;i<=m;i++)
  {
    
   printf("%d\n",f[i]);
  }
  
  
    return 0;
}