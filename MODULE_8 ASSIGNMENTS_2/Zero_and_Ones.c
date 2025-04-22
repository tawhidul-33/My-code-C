/*#include<stdio.h>
int main()
{
  int n;
  int zero = 0,one = 0;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  {
    int x;
    scanf("%d",&x);
    if(x==0)
    {
        zero = zero+1;
    }
    else if (x==1)
    {
        one = one +1;
    }
    
  }
  printf("%d %d",zero,one);

    return 0;
}
*/
//or
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  int zero = 0,one = 0;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }  
  for(int i=0;i<n;i++)
  {
    if(ar[i]==0)
    {
        zero = zero+1;
    }
    else if (ar[i]==1)
    {
        one = one +1;
    }
  }  
  
  printf("%d %d",zero,one);

    return 0;
}