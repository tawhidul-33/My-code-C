/*
7
9 5 2 1 3 7 5
5
1 4 3 4 5
*/

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n+5];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
//Frequincy 
  int f[100000];
  for(int i=0;i<n;i++){
   f[ar[i]]=1;
   
  }
 //frequincy print 
 for(int i=0;i<10;i++)// sorboscho valu 9 ace tai
 {
  printf("%d %d\n",i,f[i]);
 }

 //frequiny ace naki nai
   int m;
  scanf("%d",&m);
  int x;
  for(int i=0;i<m;i++)
  {
    scanf("%d",&x);
    printf("%d ",x);
    if(f[x]==1)
    {
      printf("ace\n");
    }
    else
    {
      printf("nai\n");
    }
     
  }

 
    return 0;
}