
#include<stdio.h>
void shift(int ar[],int n)
{   
    int k=0;
    int nar[n];//new Array
    //new aray te shifting without zero
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=0){
        nar[k++]=ar[i];
        }
    }
    // Then:-new aray te shifting zero
    for(int i=k;i<n;i++)
    {
        nar[i]=0;
    }

    //printing After all shifting
    for(int i=0;i<n;i++)
    {
        printf("%d ",nar[i]); 
    }



}

int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  shift(ar,n);
    return 0;
}