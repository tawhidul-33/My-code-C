/*
abba/=palindrom
abbu/= not palindrom
*/
#include<stdio.h>
int main()
{
  char str[1000];
  //fgets(str,sizeof(str),stdin);
  scanf("%s",str);
int i=0,len=0;


while(str[i]!='\0')
{
  i++;
  len++;
}

  int flag=0;
  for(int i=0,j=len-1;i<=j;i++,j--)
  {
    
    if(str[i]!=str[j])
    {
        flag=1;
        break;
    }

  }
  
  if(flag==0)
  {
    printf("YES");
  }
  else{
    printf("NO");
  }
    return 0;
}