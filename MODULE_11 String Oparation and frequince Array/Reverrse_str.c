
//Manualy way
#include<stdio.h>
int main()
{
  char str[10]="abcd";
  int len=strlen(str);

  for(int i=0,j=len-1;i<=j;i++,j--)
  {
    int tem=str[i];
    str[i]=str[j];
    str[j]=tem;
  }
  printf("%s",str);
    return 0;
}


