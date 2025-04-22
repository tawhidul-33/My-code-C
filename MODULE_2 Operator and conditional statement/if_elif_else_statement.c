#include<stdio.h>
int main()
{
   
  int tk;
  scanf("%d",&tk);
  if(tk>=700)
  {
    printf("Chaynis khabo");
  }
  else if (tk>=500)
  {
    printf("Pizza khabo");
  }
  else if (tk>=100)
  {
    printf(" Burger khabo");
  }
  else
  {
    printf("khabona");
  }
  
    return 0;
}