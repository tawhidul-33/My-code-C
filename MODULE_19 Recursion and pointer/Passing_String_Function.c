#include <stdio.h>
#include <string.h>
#include<ctype.h>
//input siyam

void fun(char st[])
{
  printf("%s\n",st);//input e print
  int len = strlen(st);//string er len
  printf("%d\n",len);//string er len print
  st[0]=toupper(st[0]);//first charecter uper kora
  printf("%s\n",st);//first uper kore print
}

int main()
{
  int str[100];
  scanf("%s", str);

  fun(str);
  return 0;
}