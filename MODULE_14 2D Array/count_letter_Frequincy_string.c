/*
aaabbc
*/

#include<stdio.h>
#include<string.h>
int main()
{
  char str[10000000];
  scanf("%s",str);

  int lens = strlen(str);
  int f[26]={0};

for(int i=0;i<lens;i++)
{
  int index = str[i]-'a';
  f[index]+=1;
}

for(int i=0;i<26;i++)
{
  if(f[i]!=0)
  {
    printf("%c : %d\n",i+'a',f[i]);
  }
  
}

  
    return 0;
}