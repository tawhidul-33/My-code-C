#include<stdio.h>
#include<string.h>
int main()
{
    char str1[22];
    char str2[22];
    scanf("%s",str1);
    scanf("%s",str2);
    int compare =strcmp(str2,str1);
   if(compare==0)
   {
    printf("%s",str1);
   }
   else if(compare<0)
   {
    printf("%s",str2);
   }
   else{
    printf("%s",str1);
   }
    return 0;
}
