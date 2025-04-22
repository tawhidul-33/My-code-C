/*
4
4
0
3
8
*/
#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  int x;
  for(int i=0;i<t;i++)
 {
    scanf("%d",&x);
    if(x<1)
    {
      printf("Entry-level candidate\n");
    }
    else if( x>=1 && x<=3)
    {
      printf("Junior candidate\n");

    }
    else if(x>=4&&x<=7)
    {
      printf("Mid-level candidate\n");
    }
    else if(x>7)
    {
      printf("Senior candidate\n");
    }





  }
    return 0;
}