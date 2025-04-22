#include<stdio.h>
void add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
    return;
}


int main()
{
    add();
    return 0;
}

///
/*
#include<stdio.h>
int add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
    return sum;
}

void mul(int x,int y)
{
   printf("%d",x*y);
}


int main()
{
    add();
    mul(add(),10);
  
    return 0;
}*/