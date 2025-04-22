
#include<stdio.h>
#include<string.h>
int main()
{
  char str[10000];
  scanf("%s",str);
  char sub[6]="hello";
  int j=0,i=0;
  while(str[i]!='\0')
  {
    if(str[i]==sub[j])
    {
        j++;
        
    }
    i++;
    
  }
  if(j == strlen(sub))
  {
    printf("YES");
  }
  else{
    printf("NO");
  }
  
    return 0;
}