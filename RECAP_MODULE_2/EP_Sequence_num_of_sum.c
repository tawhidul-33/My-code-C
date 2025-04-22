#include<stdio.h>
int main(){

while(1)
{
    int x,y,sum=0;
    
    scanf("%d%d",&x,&y);
                            //input
    if(x<0||x==0||y<0||y==0)// 2 5
    {                       // 5 6
        break;              // 0 5(input a zero thakte hobe nahole..
    }                              //..infenuty loop chole jabe)
    if(x>=y)
    {
        for(int i=y;i<=x;i++)
        {
            sum=sum+i;
         printf("%d ",i);
        }
    }
    else if (y>x)
    {
          for(int i=x;i<=y;i++)
        {
            sum=sum+i;
         printf("%d ",i);
        }
      
    }
   printf("sum =%d\n",sum);  
}
    return 0;
}