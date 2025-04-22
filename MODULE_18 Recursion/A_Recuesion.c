#include<stdio.h>
void Recursion(int x,int n)
{
    if(x>n)
    {
        return;
    }
    printf("I love Recursion\n");
    Recursion(x+1,n);
   
}
int main()
{
    int n;
    scanf("%d",&n);
    Recursion(1,n);
  
    return 0;
}