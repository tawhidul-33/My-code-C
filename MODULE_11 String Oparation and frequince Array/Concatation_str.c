/*
//Manual Way
#include<stdio.h>
#include<string.h>
int main()
{
  char s1[20]="siyam ";
  char s2[20]="molla";
  int len1=strlen(s1);
  int len2=strlen(s2);

  for(int i=len1,j=0;j<len2;i++,j++)
  {
    s1[i]=s2[j];
  }
  printf("%s",s1);

    return 0;
}
*/
// special way
#include<stdio.h>
#include<string.h>
int main()
{
  char s1[20]="siyam ";
  char s2[20]="molla";
  
 strcat(s1,s2);

  printf("%s",s1);

    return 0;
} 