/*
input
abcd
ef
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[30];
  char str2[30];
scanf("%s",str1);
scanf("%s",str2);

// length ber kora
int len1=strlen(str1);
int len2=strlen(str2);
printf("%d %d\n",len1,len2);

//str3 te str1 copy kora
char str3[30];
strcpy(str3,str1);


//str1 a str2 jog kora
strcat(str1,str2);
printf("%s\n",str1);

//swaping
char tem = str3[0];
str3[0] = str2[0];
str2[0] = tem;
printf("%s %s\n",str3,str2);


  return 0;
}