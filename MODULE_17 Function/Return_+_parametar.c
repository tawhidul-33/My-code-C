#include<stdio.h>
//user define Function
int add(int a,int b)
{
  int sum =a +b;

  return sum;    
}
//Main Function
int main()
{
   int a=20,b=30;
   int result = add(a,b);
  printf("%d\n",result);
    return 0;
}

/*
#include<stdio.h>
//user define Function
int add(int a,int b)
{
  int sum =a+b;
  return sum;    
}
//Main Function
int main()
{int a,b;
    scanf("%d%d",&a,&b);
  int result = add(a,b);
  printf("%d\n",result);
    return 0;
}

//Aki Function 2bar call kora..vinno valu diye
#include<stdio.h>
//user define Function
int add(int a,int b)
{
  int sum =a+b;
  return sum;    
}
//Main Function
int main()
{
  int result = add(10,20);
  printf("%d\n",result);
  result =0;

  result=add(100,200);
  printf("%d",result);
    return 0;
}*/