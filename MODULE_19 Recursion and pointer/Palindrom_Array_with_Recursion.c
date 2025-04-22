#include<stdio.h>
int paldom(int ar[],int i,int j)
{ 
  
   if(i>j)
   {
     return 1;
   }
    if(ar[i]!=ar[j])
    {
         return 0;
    }
    paldom(ar,i+1,j-1);
   

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
  int chek=paldom(ar,0,n-1);
  if(chek==1){
    printf("YES");
  }
  else{
    printf("NO");
  }
    return 0;
}