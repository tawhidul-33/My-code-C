#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    printf("%d %d", *p1, *p2);

    return 0;
}