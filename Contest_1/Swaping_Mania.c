/*
nhitron
rhinnto
or,
phitron
rhipnto
*/

#include<stdio.h>
#include<string.h>
 int fun(char str[],char ttr[])
 {
  int lenstr= strlen(str);
  int lenttr= strlen(ttr);
   int fstr[26]={0},fttr[26]={0};

  if(lenstr==lenttr)
  {
   for(int i=0;i<lenstr;i++)
   {
    fstr[str[i]-'a']++;
    fttr[ttr[i]-'a']++;
   }

   for(int i=0;i<26;i++)
   {
     if(fstr[i]!=fttr[i])
     {
      return 0;
     }
   }
   return 1;

  }
  else{
    return 0;
  }


 }
 
  int main()
  {
    char str[1001];
    char ttr[1001];
    scanf("%s",str);
    scanf("%s",ttr);

    if(fun(str,ttr))
    {
      printf("YES");
      
    }
    else {
      printf("NO");
    }

      return 0;
  }

