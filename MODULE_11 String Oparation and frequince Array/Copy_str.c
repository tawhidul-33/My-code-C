
//Manual way
#include<stdio.h>
int main()
{
  char s1[10]="abcde";
  char s2[10]="sm";
  printf("s1=%s\ns2=%s\n",s1,s2);
  for(int i=0;s1[i]!='\0';i++)
  {
    s2[i]=s1[i];
  }
  printf("s1=%s\ns2=%s",s1,s2);

    return 0;
}
/*
//or
#include<stdio.h>
#include<string.h>
int main()
{
  char s1[10]="abcde";
  char s2[10]="sm";
  int len=strlen(s1);
  printf("s1=%s\ns2=%s\n",s1,s2);

  for(int i=0;i<len;i++)
  {
    s2[i]=s1[i];
  }
  printf("s1=%s\ns2=%s",s1,s2);

    return 0;
}

//Special Way
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[10]="abcde";
  char s2[10]="sm";
  printf("s1=%s\ns2=%s\n",s1,s2);

  strcpy(s2,s1);
  printf("s1=%s\ns2=%s",s1,s2);
    return 0;
}
*/