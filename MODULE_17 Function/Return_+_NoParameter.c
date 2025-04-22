#include<stdio.h>
int a,b;//global decleare
int add()
{
  int sum =a+b;
  return sum;    
}

int main()
{
  scanf("%d%d",&a,&b);
  
  printf("%d\n",add());
    return 0;
}

/*
//Without global decleare
#include<stdio.h>
int add()
{ 
 int a,b;
  scanf("%d%d",&a,&b);
  int sum =a+b;
  return sum;    
}

int main()
{
  
  
  printf("%d\n",add());
    return 0;
}
*/
/*
//fixed valu er function
#include<stdio.h>
float getpi()
{
  return 3.1416; 
}

int main()
{
  printf("%0.4f",getpi());
    return 0;
}
*/