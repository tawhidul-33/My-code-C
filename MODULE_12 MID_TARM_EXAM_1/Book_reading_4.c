/*
10 33
1 3 4 6 8 10 12 15 23 36
*/
/*
#include<stdio.h>
int main()
{
  int b,t;
  scanf("%d %d",&b,&t);
  
  int str[b];
  for(int i=0;i<b;i++)
  {
    scanf("%d", & str[i]);
  }

  int sum =0,count=0;

  for(int i=0;i<b;i++)
  {
    sum=sum+str[i];
    if(sum<=t)
    {
      count++;
    }

  }
  printf("%d",count);

    return 0;
}
*/
/*
10 33
1 3 4 6 8 10 12 15 23 36
*/

#include<stdio.h>
int main()
{
  int b,t;
  scanf("%d %d",&b,&t);
    int sum =0,count=0;
  int books;
  for(int i=0;i<b;i++)
  {
    scanf("%d", &books);
     sum=sum+books;
    if(sum<=t)
    {
      count++;
    }

  }
  printf("%d",count);

    return 0;
}