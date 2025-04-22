
#include<stdio.h>
int main()
{
  int day = 4;
  switch(day)
  {
  case 1:
    printf("saturday");
    break;
  case 2:
    printf("sunday");
    break;
  case 3:
    printf("monday");
    break;
  case 4:
    printf("tuesday");
    break;
  case 5:
    printf("wedday");
    break;
  case 6:
    printf("thusday");
    break;
  case 7:
    printf("Frirday");
    break;
  default:
    printf("wrong day");
    break;

  }

    return 0;
}

// Nested_Sitch_case
/*

#include<stdio.h>
int main()
{
  int day = 1,hour = 1;
  switch(day)
  {
  case 1:
    printf("saturday\n");
    switch(hour)
    {
      case 1:
      printf("10:30");
    }
    break;
  case 2:
    printf("sunday");
    break;
  case 3:
    printf("monday");
    break;
  case 4:
    printf("tuesday");
    break;
  case 5:
    printf("wedday");
    break;
  case 6:
    printf("thusday");
    break;
  case 7:
    printf("Frirday");
    break;
  default:
    printf("wrong day");
    break;

  }

    return 0;
}

*/
