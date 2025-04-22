#include<stdio.h>
int main()
{
   int tk;
   scanf ("%d",&tk);
   if(tk>=100)
   {
    printf("Burger khabo");
   }
   else if(tk>=500)
   {
    printf("Fuska khabo");
   }
   else if(tk>=20)
   {
    printf("Ice cream khabo");
   }
   else
   {
    printf("khabo na");
   }
    return 0;
}