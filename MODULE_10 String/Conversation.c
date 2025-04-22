/*
hAppY,new,year
*/
#include<stdio.h>
int main()
{
  char str[1000000];
  fgets(str,sizeof(str),stdin);
  //scanf("%[^\n]s",str);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==',')
    {
        printf(" ");
    }
    else if(str[i]>='a'&& str[i]<='z')
    {
        int upr = str[i]-32;
        printf("%c",upr);
    }
    else if(str[i]>='A'&& str[i]<='Z')
    {
        int law = str[i]+32;
        printf("%c",law);
    }


  }

    return 0;
}