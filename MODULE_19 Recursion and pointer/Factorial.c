#include<stdio.h>
long long fact(int n)
{
    if(n==0)
    {
      return 1;
    }
    long long ft=n*fact(n-1);
    return ft;
}

int main()
{
  int n;
  scanf("%d",&n);
  long long factorial=fact(n);
  printf("%lld",factorial);
    return 0;
}