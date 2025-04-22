// input:
// 2 := test case 
// 3
// 4

/*
//without recursion
#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int tc=0;tc<t;tc++)
  {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
     for(int i=n-1;i>=1;i--)
    {
        printf("%d ",i);
    }
    printf("\n");
  }
    return 0;
}
*/

//with Recursion 
#include<stdio.h>
//incrasing
void incrasing_fun(int num)
{ 
    if(num<1)
    {
    return;
    }
incrasing_fun(num-1);
printf("%d ",num);
}
//decrasing
void decrasing_fun(int Nnum)
{ 
    if(Nnum<1)
    {
    return;
    }
    printf("%d ",Nnum);
  decrasing_fun(Nnum-1);

}

int main()
{
  int t;
  scanf("%d",&t);
  for(int tc=0;tc<t;tc++)
  {
    int n;
    scanf("%d",&n);
    incrasing_fun(n);
    decrasing_fun(n-1);
   printf("\n");
  }
  
    return 0;
}