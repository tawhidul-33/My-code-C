/*
// je kno akti ghorer namta
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=10;i++)
  {
  printf("%d x %2d =%2d\n",n ,i, n*i);
  }
    return 0;
}
*/

//ak sathe akadhik ghorer namta
#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
for(int j=1;j<=n;j++)
{

  for(int i=1;i<=m;i++)
  {
  printf("%d x %2d =%2d\n",j ,i, j*i);
  }
  printf("\n\n");
} 
    return 0;
}