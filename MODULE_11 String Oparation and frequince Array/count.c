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
  char str[1000000];

  scanf("%s",str);
  int sum=0;
  for(int i=0;str[i]!='\0';i++)
  {
    int digit = str[i]-'0';// '0'er ASCI velu 48
    
   sum=sum+digit;

  }
  printf("%d",sum);
    return 0;
}