/*
#include<stdio.h>
int N;
void fun(int x)
{
    if(x>N)
    {
        return;
    }
    printf("%d ",x);
    fun(x+1);
}

int main()
{
  scanf("%d",&N);
  fun(1);
    return 0;
}
*/
//OR
#include<stdio.h>

void fun(int x,int N)
{
    if(x>N)
    {
        return;
    }
    printf("%d\n",x);
    fun(x+1,N);
}

int main()
{ 
  int N;          //   int n;
  scanf("%d",&N); //   scanf("%d",&n);
  fun(1,N);       //   fun(1,n);

    return 0;
}