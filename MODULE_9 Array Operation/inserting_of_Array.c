/*
input
5
1 6 3 5 7
2 10 //- inserting input & valu
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

 // inserting index & valo input 
int indx,valu;
scanf("%d %d",&indx,&valu);


length++;

for(int i=length-1;i>=indx;i--)
{
a[i+1]=a[i];
}

 a[indx]=valu;


for(int i=0;i<length;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}