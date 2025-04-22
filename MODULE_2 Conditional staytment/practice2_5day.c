/*
//practice_2.1 sum,sum.mul,dvd
#include <stdio.h>
int main()
{
int a,b;
scanf ("%d %d",&a,&b);
int sum=a+b;
int sub=a-b;
int mul=a*b;
float dvd=a*1.0/b;

printf("sum=%d sub=%d mul=%d dvd= %0.1f ",sum,sub,mul,dvd);


    return 0;
}


//practic_2.2 even odd
#include<stdio.h>
int main ()
{
int a;
scanf("%d",&a);
if(a%2==0){

    printf("even");
}
else{

    printf("odd");
}


    return 0;
}

//practic_2.3 positive or negative
#include <stdio.h>
int main ()
{
int x;
scanf("%d",&x);
  if(x>0)
  {
    printf("positive");
  }
  else if(x<0)
  {
    printf("Negative");
  }
  else
  {
    printf("zero");
  }
  
    return 0;
}
*/
//practice_2.4 
#include<stdio.h>
int main ()
{
int tk;
scanf("%d",&tk);
   if(tk>=10000)
   {
    printf("buy Gucci bag\n");
     if(tk>=20000)
     {
        printf("then buy gucci belt");
     }

   }
   else if (tk>=5000)
   {
   printf("levis Bag");
   }
   else
   {
    printf("somethig");

   }

   



    return 0;
}
