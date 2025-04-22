#include <stdio.h>
/*
input
5
1 2 3 1 2
*/
int a[1000000];
int main()
{
  int length;
  scanf("%d", &length);
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &a[i]);
  }
  // a[i] arry reverse in a[i] arrey
  int flag = 1;
  for (int i = 0, j = length - 1; i <= j; i++, j--)
  {
    if (a[i] != a[j])
    {
      flag = 0;
      break;
    }
  }

  if (flag == 1)
  {
    printf("Yes Palindrob");
  }
  else
  {
    printf(" Not palindrom");
  }

  return 0;
}