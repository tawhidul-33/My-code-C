#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            printf("%d Yes\n",i);
        }
        else if(i%5==0)
        {
            printf("%d Yes\n",i);
        }
        else
        {
            printf("%d No\n",i);
        }
    }
    return 0;
}
