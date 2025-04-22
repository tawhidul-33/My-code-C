/*
#include<stdio.h>
int count;
int log(long long n)
{
  if(n<=1)
  {
    return 0;
  }
  count++;
  log(n/2);
  return count;
}
int main()
{
  long long n;
  scanf("%lld",&n);
  int result=log(n);
  printf("%d",result);
    return 0;
}
*/
//or
#include<stdio.h>

int log(long long n)
{
  if(n<=1)
  {
    return 0;
  }
  
  return 1+log(n/2);
}
int main()
{
  long long n;
  scanf("%lld",&n);
  int result=log(n);
  printf("%d",result);
    return 0;
}