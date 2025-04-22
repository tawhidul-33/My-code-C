#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
int yr = n/365;
int ody = n%365;
int mn = ody/30;
int dy = ody%30;


printf("%d years\n%d months\n%d days",yr,mn,dy);

    return 0;
}


