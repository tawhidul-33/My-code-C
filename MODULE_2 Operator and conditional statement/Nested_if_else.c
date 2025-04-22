
/*
#include<stdio.h>
#include<stdbool.h>
int main()
{
 int tureDays;
 scanf("%d",&tureDays);
 if(tureDays==2)
 {
    bool isboatAvailable = true;
    if(isboatAvailable)
    {
        printf("tangor hayor jabo\n");
    }
    else
    {
        printf("shrimongol");

    }
 }
 else if (tureDays>=4)
 {
     bool ShipAvailable = false;
     if(ShipAvailable)
     {
        printf("sentmartin");
     }
     else
     {
        printf("cox'sbaxer");
     }
 }
else
{
        printf("kothayo jabo na");
}
 
    return 0;
}
*/

#include<stdio.h>
int main()
{
  int tk;
  scanf("%d",&tk);
if(tk>=100)
{
    printf("Bazare jabo\nBurger khabo\t");
    if(tk>=500)
    {
        printf("Pizza khabo\nthen Basay jabo");
    }
    else
    {
        printf("then Basay jabo");
    }
}
else
{
    printf("Bazare jabona");
}
    return 0;
}


