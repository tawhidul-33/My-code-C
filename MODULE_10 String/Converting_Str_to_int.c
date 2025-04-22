/*
#include<stdio.h>
int main()
{
  char str[5]="5";
  int num=str[0]-'0';
  printf("%d",num);
    return 0;
}
*/
#include<stdio.h>
int main()
{
  char str[5];
  int n;
  scanf("%d",&n);
  scanf("%s",str);
  int num=0;
  for(int i=0;i<n;i++)
  {
    int digit = str[i]-'0';// '0'er ASCI velu 48
    num=num*10+digit;
  }
  printf("%d",num);
    return 0;
}