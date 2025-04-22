
#include<stdio.h>
int main()
{
int mark;
scanf("%d",&mark);
if(33<=mark && mark <=100)
{
    printf("You have passed\n");

    if(80<=mark && mark<=100)
    {
    printf("You have got A+ Grade\n");
      if(mark>=90)
      {
        printf("Congratulation,You have got scholarship");
      }
    }
    else if (70<=mark && mark<=79)
    {
    printf("You have got A- Grade");
    }
    else if (60<=mark && mark<=69)
    {
    printf("You have got A Grade");
    }
    else if (50<=mark && mark<=59)
    {
    printf("You have got B Grade");
    }
    else if (40<=mark && mark<=49)
    {
    printf("You have got C Grade");
    }
    else if (33<=mark&& mark<=39)
    {
    printf("You have got D Grade");
    }
}
else if(0<=mark && mark<=32)
{
    printf("You have got F Grade");
}
else
{
    printf("Invaild Answer");

}
    return 0;
}
