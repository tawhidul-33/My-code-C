/*
input
5  
1 2 6 7 8
3 :-koyta new indx insert sei songkha
2 3 |\
3 4 | |- ai gula indx & valu
4 5 |/
*/
#include<stdio.h>
int a[10000];
int main()
{
  int length;
  scanf("%d",&length);
  for(int i=0;i<length;i++)
  {
    scanf("%d",&a[i]);
  }

 // inserting Multiple index & valo input
 int indxth;
 scanf("%d",&indxth);
for(int j=0;j<indxth;j++)
{
int indx,valu;
scanf("%d %d",&indx,&valu);


length++;

for(int i=length-1;i>=indx;i--)
{
a[i+1]=a[i];
}

 a[indx]=valu;
}

for(int i=0;i<length;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}