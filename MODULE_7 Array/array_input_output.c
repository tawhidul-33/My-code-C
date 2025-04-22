
/*// akti input niye akti output :

#include<stdio.h>
int main() 
{
  int a[5]={5,4,3};
 
  //scanf("%d",&a[0]); 

   printf("%d",a[0]);
  
    return 0;
}


/// sokol input niye akti output:

#include<stdio.h>
int main()
{
  int a[5];
  for(int i=0;i<5;i++)
  {
  scanf("%d",&a[i]); 
  }
   printf("%d\n",a[2]);
  
    return 0;
}
*/


///sokol input niye..sokol output:

#include<stdio.h>
int main()
{
  int a[5];
  for(int i=0;i<5;i++)
  {
  scanf("%d",&a[i]); 
  
  }
  for(int i=0;i<5;i++)
  {
   printf("%d\n",a[i]);
  }
    return 0;
}


/*
// variable er Address print..,,
#include<stdio.h>
int main()
{
  int a[5];
  for(int i=0;i<5;i++)
  {
  scanf("%d",&a[i]); 
  }
  for(int i=0;i<5;i++)
  {
   printf("%d\n",i);
  }
    return 0;
}
*/