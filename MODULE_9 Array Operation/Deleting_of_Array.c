#include<stdio.h>
/*
iput
5
1 6 3 5 7
2 //- deleting index input
*/
int a[10000];
int main()
{
  int length;
  scanf("%d",&length);
  for(int i=0;i<length;i++)
  {
    scanf("%d",&a[i]);
  }

//Deleting index input
int indx ;
scanf("%d",&indx);

for(int i=indx;i<length-1;i++)// -1 na dile o hobe,
{
    a[i]=a[i+1];
}
length--;
//print after deleting
for(int i=0;i<length;i++)
{
    printf("%d ",a[i]);
}


    return 0;
}