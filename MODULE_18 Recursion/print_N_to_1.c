
#include<stdio.h>
void fun(int x)
{
    if(x<1)
    {
        return;
    }

    printf("%d ",x);

    fun(x-1);
}

int main()
{
    int N;
    scanf("%d",&N);
    fun(N);

  
    return 0;
}
/*
//or
#include<stdio.h>
void fun(int x,int N)
{
    if(x>N)
    {
        return;
    }
    fun(x+1,N);
    printf("%d\n",x);
    
}

int main()
{ 
  int N;          
  scanf("%d",&N); 
  fun(1,N);       

    return 0;
}
*/