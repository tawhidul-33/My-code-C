/*
10 4 8
8 7 2 3 1 10 25 8 13 5
*/
#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d %d %d",&t,&x,&y);
    int phn;
    int count=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&phn);
        if(phn>=x && phn<=y)
        {
            count++;

        }

    }
    printf("%d",count);
  
    return 0;
}