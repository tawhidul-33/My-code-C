
#include<stdio.h>
int main()
{
  for(int i=100;i<=500;i++)
  {
    
    if(i%2==0 && i%3==0 && i%5==0)
    {
        printf("%d is the number\n",i);
        continue;
    }
    printf("%d is the not number\n",i);

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
           
            continue;
          
        }
        printf("line3\n"); 
        printf("line4\n");
    }
  
    return 0;
}
*/


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
            printf("line3\n"); 
            continue;
          
        }
       
        printf("line4\n");
    }
  
    return 0;
}
*/