#include<stdio.h>
int main()
{
  char n ;
  scanf("%c",&n);
  if(n>='a'&& n<='z')
  {

    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
  }
    return 0;
}