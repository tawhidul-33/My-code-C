/*
//print
#include<stdio.h>
void fun(int x[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
         printf("%d ",x[i]);
    }
    
}
int main()
{ 
  int ar[10]={1,3,2,4,6,5,7,9,8,10};
  fun(ar,10);
  

    return 0;
}

*/
//sum 
#include<stdio.h>
int fun(int x[],int y)
{
    int sum=0;
    for(int i=0;i<y;i++)
    {
         sum=sum+x[i];
    }
    return sum;
}
int main()
{ int n;
 scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&ar[i]);
  }
  int result = fun(ar,n);
  printf("%d",result);

    return 0;
}