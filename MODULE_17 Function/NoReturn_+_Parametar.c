
#include<stdio.h>
void add(int a,int b)
{
    int sum =a+b;
    printf("%d",sum);
    return;
}

int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  add(a,b);
    return 0;
}

/*
//
#include<stdio.h>

void checkalpha(char c)
{
    if('a'<=c && c<='z')
    {
       printf("lower case\n"); 
    }
    else 
    {
        printf("uper case"); 
    }
    
    return 0;
}

int main()
{
 checkalpha('a');
 checkalpha('A');
    return 0;
}
*/