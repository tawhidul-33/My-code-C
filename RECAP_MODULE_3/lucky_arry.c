#include<stdio.h>
int main()
{
   int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
//find the min valu
int min=a[0];
for(int i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
}
//count the frequency valu of min
int count=0;
for(int i=0;i<n;i++)
{
    if(a[i]==min)
    {
        count++;
    }
}

//Is the frequincy odd/even
if(count%2==0)
{
    printf("Unlucky");
}
else{
printf("Lucky");
}
    return 0;
}