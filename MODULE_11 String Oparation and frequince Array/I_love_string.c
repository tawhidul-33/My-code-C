/*
icpcAssiut
egypt
*/
#include<stdio.h>
#include<string.h>
int main()
{
 
    char s[100];
    char t[100];
   scanf("%s%s",s,t);
  int slen =strlen(s);
   int tlen =strlen(t);
   
   char st[300];
   int k=0;
   for(int i=0;i<slen || i<tlen;i++)
   {
    if(i<slen){
      st[k++]=s[i];
    }
    if(i<tlen){
      st[k++]=t[i];
    }
    
   }
 
  st[k]='\0';
  printf("%s\n",st);
  

   
    
    return 0;
}
