#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr=(int*)calloc(5,sizeof(int));

for(int i=0; i<5;i++)
{
   arr[i]=i+1;
    printf("%d ",arr[i]);
}
printf("\n");

int tmp=arr;
arr=(int*)realloc(arr,10*sizeof(int));
  for(int i=0;i<10;i++)
  {
    if(arr==NULL){
        arr=tmp;
    }
  }

  for(int i=5;i<10;i++)
  {
    arr[i]=100;
  }
  
  for(int i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }
  free(arr);
    return 0;
}