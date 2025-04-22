#include<stdio.h>
void digit(int n)
{   if(n==0){
    return;
}
    int dt=n%10;
    
    digit(n/10);
    printf("%d ",dt);
}
int main()
{
  int t;
  scanf("%d",&t);
  for(int tc=0;tc<t;tc++)
  {
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
    }
    digit(n);
    printf("\n");



  }

    return 0;
}