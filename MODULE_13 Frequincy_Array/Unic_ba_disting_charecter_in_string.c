#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="applee";
  int lens= strlen(str);
  
  int f[26]={0};
  
  for(int i=0;i<lens;i++)
  {
 
    int index = str[i] -'a';
    f[index]=1;

  }

  int count=0;
  for(int i=0;i<26;i++)
  {
    /*
    //sokol charecter and frequince print korle
    //and unic numbar
    printf("%c %d\n",i+'a',f[i]);
    count = count+f[i];  
   */

   //jodi sudu ftrquincy number er charecter print korle
   //and unic numbar
   if (f[i]==1)
   {
    printf("%c %d\n",i+'a',f[i]);
        count++;
   }
   
    
  }
  printf("Unic Number = %d",count);

    return 0;
}