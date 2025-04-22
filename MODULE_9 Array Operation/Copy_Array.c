/*
input
5  
1 2 3 7 8
*/
#include<stdio.h>
int a[10000],b[10000];
int main()
{
  int length1,length2;
  scanf("%d",&length1);

  for(int i=0;i<length1;i++)
  {
    scanf("%d",&a[i]);
  }
//print Before Copy
printf("Before copy\n");

  for(int i=0;i<length1;i++)
  {
    printf("%d ",a[i]); 
  }
  printf("\n");

  for(int i=0;i<length1;i++)
  {
    printf("%d ",b[i]);
  }
  printf("\n"); 


// prosessing of Copy
 for(int i=0;i<length1;i++)
{
    b[i]=a[i];
}
length2=length1;

//print After Copy
printf("After copy\n");
  for(int i=0;i<length1;i++)
  {
    printf("%d ",a[i]); 
  }
printf("\n");

  for(int i=0;i<length2;i++)
  {
    printf("%d ",b[i]);
  }
printf("\n"); 





    return 0;
}