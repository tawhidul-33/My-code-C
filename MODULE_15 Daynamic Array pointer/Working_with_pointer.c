
#include<stdio.h>
int main()
{
    int a=5;
   int *p=&a;
    printf("%d\n",&a);//address ber korar jonno,, OR
    printf("%d\n",p);//address ber korar jonno
    printf("%d\n",*p);//valu ber korar jonno
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int a=5;
   int *b=&a;
    printf("%d\n",a);
    *b=6;
    printf("%d\n",*b);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *x=&a,*y=&b;
    printf("%d %d\n",*x,*y);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d\n",*x,*y);

//or
    
    int a=5,b=6;
    int *x=&a,*y=&b;
    printf("%d %d\n",a,b);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d\n",a,b);
    

    return 0;
}

*/