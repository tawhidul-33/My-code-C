#include<stdio.h>
#include<stdlib.h>
//Daynamic Array beabohar kore
int main()
{
  int n;
  int *ptr;
  ptr=&n;
  scanf("%d",ptr);
 int *arr;
 arr=(int*)calloc(n,sizeof(int));// arr=(int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 {
    scanf("%d",arr+i);//scanf("%d",&arr[i]);
 }

  for(int i=0;i<n;i++)
 {
   // printf("%d",*(arr+i));
    if(*(arr+i)<0){
        printf("2 ");
    }
    else if(*(arr+i)>0){
         printf("1 ");
    }
    else{
        printf("0 ");
    }
 }
free(arr);
 
    return 0;
}