/*
abc def ghi
*/

#include<stdio.h>
#include<string.h>
int main()
{
  char str1[1000];
  char str2[1000];
  char str3[1000];
  scanf("%s%s%s",str1,str2,str3);
  if(strcmp(str1,str2)<=0)
  { //str1
   if(strcmp(str1,str3)<=0)
   {
    printf("%s\n",str1);
   }
   else{
    printf("%s\n",str3);
   }
    
  }
  else if(strcmp(str2,str3)<=0)
  {
    printf("%s\n",str2);
    
  }
  else{
    printf("%s\n",str3);
  }
  //max
    if(strcmp(str1,str2)>=1)
  { //str1
   if(strcmp(str1,str3)>=1)
   {
    printf("%s\n",str1);
   }
   else{
    printf("%s\n",str3);
   }
    
  }
  else if(strcmp(str2,str3)>=1)
  {
    printf("%s\n",str2);
    
  }
  else{
    printf("%s\n",str3);
  }
    return 0;
}