#include<stdio.h>
/*
iput
5  
1 2 3 7 8
2 :-koyta indx Delete korbo sei songkha
3 |\
4 |/ ai gula indx
  
 
 
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

//Deleting Multiple index input
int indxth;
scanf("%d",&indxth);
for(int j=0;j<indxth;j++)
{
int indx ;
scanf("%d",&indx);

for(int i=indx;i<length-1;i++)// -1 na dile o hobe,
{
    a[i]=a[i+1];
}
length--;
}
//print after deleting
for(int i=0;i<length;i++)
{
    printf("%d ",a[i]);
}


    return 0;
}