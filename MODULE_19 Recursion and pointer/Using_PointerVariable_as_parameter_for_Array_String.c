
/*// pointer use for Array
#include<stdio.h>
void fun(int *x,int y)    //void fun(int x[],int y) 
{                         // :=without pointer but same kaj
    for(int i=0;i<y;i++)
    {
       x[i]=x[i]+2; //x[i]+=2;
    }   
}

int main()
{ int n;
 scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&ar[i]);
  }

  //Array print Before function call 
   for(int i=0;i<n;i++)
  {
    printf("%d ",ar[i]);
  }

  printf("\n");

  //Array print After function call
   fun(ar,n);
     for(int i=0;i<n;i++)
  {
    printf("%d ",ar[i]);
  }
 

    return 0;
}

//Pointer use of string

#include <stdio.h>
#include <string.h>
//input siyam

void fun(char *st) //void fun(char st[])
                    // :=without pointer but same kaj
{
  printf("%s\n",st);//input e print

  st[4]='m';
  
}

int main()
{
  char str[100];
  scanf("%s", str);

  fun(str);

  printf("%s\n",str);
  return 0;
}
*/
//Pointer use of string

#include <stdio.h>
#include <string.h>
//input siyam

void fun(char *st1,char *st2)
{
  printf("%s %s\n",st1,st2);//input e print
  strcat(st1,st2);
  printf("%s %s\n",st1,st2);
  strcpy(st1,st2);
  printf("%s %s\n",st1,st2);
}

int main()
{
  char str1[100];
  char str2[100];
  scanf("%s %s", str1,str2);

  fun(str1,str2);

  printf("%s %s\n",str1,str2);
  return 0;
}