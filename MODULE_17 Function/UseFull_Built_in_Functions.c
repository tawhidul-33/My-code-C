#include<stdio.h>
#include<math.h>
int main()
{
  double a=10.5;

//ceil always uper valur jonno
  printf("%lf\n",ceil(a));

//floor always lower valur jonno
printf("%lf\n",floor(a));

//round 0.5 thakle &&  0.5 er upre thakle uper valu hoy
//ar 0.5 er niche thakle lower valur jonno
printf("%lf\n",round(a));

// sqrt ba rutover er jonno
printf("%lf\n",sqrt(20));

//power er jonno
printf("%lf",pow(4,2));
    return 0;
}