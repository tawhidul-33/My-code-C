#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int tk;
    scanf("%d",&tk);
    if(tk>=1000)
    {
        printf("Three Kacchi");
    }
    else if(tk>=500)
    {
        printf("One Large Pizza");
    }
    else if(tk>=250)
    {
        printf("Three Small Burger");
    }
    else if(tk>=100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }
    return 0;
}
