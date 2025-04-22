/*
4
7 2 1 3

*/
//Daynamic Array beabohar kore
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  int *ptr;
  ptr=&n;
  scanf("%d",ptr);
  int *arr;
  arr=(int*)malloc(n*sizeof(int));
  //arr=(int*)calloc(n,sizeof(int));
  for(int i=0;i<n;i++)
  {
    scanf("%d",arr+i);//scanf("%d",&arr[i]);
  }

//print
   for(int i=0;i<n;i++)
  {
    printf("%d ",*(arr+i));//printf("%d ",arr[i]);
  }
  printf("\n");

//sumation
  long long sum=0;
  long long *sumation=&sum;
  for(int i=0;i<n;i++)
  {
  //sum+=*(arr+i);//sum+=arr[i];  
   *sumation+= *(arr+i); 
  }
  long long abssum = llabs(*sumation);//abs(); aita dara absulate valu.. 
  printf("%lld",abssum);        //mane possetive valu pawya jay
  free(arr);
    return 0;
}