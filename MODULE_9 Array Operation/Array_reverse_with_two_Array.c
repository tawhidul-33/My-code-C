/*
input
5
1 2 3 4 5
*/
#include<stdio.h>
int a[10000],b[10000];
int main()
{
  int length;
  scanf("%d",&length);
  for(int i=0;i<length;i++)
  {
    scanf("%d",&a[i]);
  }
//a[i] er reversing Copy in b[j]  
  for(int i=0,j=length-1;i<length;i++,j--)
{
  b[j]=a[i];   
}
//print b[i] reversing copy
printf("After b[i] Reversing Copy\n");
 for(int i=0;i<length;i++)
 {
    printf("%d ",a[i]);
 }
 printf("\n");
  for(int i=0;i<length;i++)
 {
    printf("%d ",b[i]);
 }
 printf("\n");

//After a[i] copy from b[i] reversing valu
for(int i=0;i<length;i++)
{
  a[i]=b[i];
}
//print a[i] & b[i] reversing copy
printf("After a[i] copy from b[i] reversing valu\n");
 for(int i=0;i<length;i++)
 {
    printf("%d ",a[i]);
 }
 printf("\n");
  for(int i=0;i<length;i++)
 {
    printf("%d ",b[i]);
 }
 printf("\n");

    return 0;
}