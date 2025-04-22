
#include<stdio.h>
int main()
{
  for(int i=100;i<=500;i++)
  {
    printf("%dchaking\n",i);
    if(i%2==0 && i%3==0 && i%5==0)
    {
        printf("is the number %d\n",i);
        break;
    }
    
  }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=500;i++)
    {
        printf("%d\n",i);
        printf("line1\n");
        printf("line2\n");
        if(i==10)
        {
            break;
            
        }
        printf("line3\n");
        printf("line4\n");
    }
  
    return 0;
}

*/



