/*
4
20 1 2 2// last 3ta 1,2,3 gun kore ..gunfol 20 banayte koto gun korte hobe ?
10 2 2 1
1 1 2 3
0 3 10 15
*/
#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int tc=0;tc<t;tc++)
  {
    long long m;
    scanf("%lld",&m);

    int n[3];
    long long mul=1;
    for(int i=0;i<3;i++)
    { 
        scanf("%d",&n[i]);
      mul=mul*n[i];
    }
    if(m%mul==0)
    {
       long long ans= m/mul;
       printf("%lld\n",ans);
    }
    else{
      printf("-1\n");  
    }
    

  }
    return 0;
}