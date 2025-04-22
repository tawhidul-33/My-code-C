#include <stdio.h>
#include<limits.h>
int max = INT_MIN ;
int max_fun(int ar[], int n, int i)
{
  
  if(i>=n)
  {
    return ; 
  }

  if (ar[i] > max)
  {
    max = ar[i];
    
  }
  max_fun(ar, n, i + 1);
  return max;
}
int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  int max = max_fun(ar, n, 0);
  printf("%d ", max);
  return 0;
}