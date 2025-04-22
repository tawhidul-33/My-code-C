
#include<stdio.h>
int main()
{
  char str[20];
  scanf("%s",str);
  printf("%s",str);

    return 0;
}


/*
// input niyar somay space thakle
//Rule_1*
#include<stdio.h>
int main()
{
  char str[20];
  scanf("%[^\n]s",str);
  printf("%s",str);

    return 0;
}

//or
//Rule_2**
#include<stdio.h>
int main()
{
  char str[40];
  fgets(str ,sizeof(str),stdin);
  printf("%s",str);

    return 0;
}


//New print neyom
#include<stdio.h>

int main()
{
  char str[27];
  fgets(str,sizeof(str),stdin);
  fputs(str,stdout);

    return 0;
}*/