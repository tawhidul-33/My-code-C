/*
//Manual Way
#include<stdio.h>
int main()
{
  char str[10]="abcd";
  int len=0;
  for(int i=0;str[i]!='\0';i++)
  {
    len++;
  }
  printf("%d",len);
    return 0;
}
*/
//Specil way
#include<stdio.h>
#include<string.h>
int main()
{
  char str[10]="abcd";
  int len=strlen(str);
  printf("%d",len);
    return 0;
}