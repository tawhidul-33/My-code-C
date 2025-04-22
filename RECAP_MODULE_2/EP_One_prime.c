/*
#include<stdio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
      count++;
      break;
       
    }  
}
if(count==0)
{
    printf("YES");
}
else
{
    printf("NO");
}


return 0;
}
*/
#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for( i=2;i<=n;i++)
{
    if(n%i==0)
    {
      
      break;
       
    }  
}
if(n==i)
{
    printf("YES");
}
else
{
    printf("NO");
}


return 0;
}
