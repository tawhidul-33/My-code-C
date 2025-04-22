#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(ch >='0'&& ch <='9')
  {
  printf("IS DIGIT");
  }
  else
  {
    printf("ALPHA\n");

    if(ch>='A'&& ch<='Z')
    {
        printf("IS CAPITAL");
    }
    else
    {
        printf("IS SMALL");
    }
   
  }

    return 0;
}