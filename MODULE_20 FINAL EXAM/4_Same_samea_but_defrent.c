/*
train
candy
bread
*/
#include<stdio.h>
#include<string.h>
int opr(char str1[],char str2[],char str3[])
{
  int len=strlen(str1);
  int count=0;
  for(int i=0;i<len;i++)
  {
    //char valu[3]={str1[i],str2[i],str3[i]};
    if (str1[i]==str2[i])
    {
        if(str1[i]==str3[i])
        {
           continue;
        }
        else{
            count++;
        }

    }
    else if(str2[i]==str3[i])
    {
        if(str2[i]==str1[i])
        {
            continue;
        }
         else{
            count++;
        }
    }
    else if(str1[i]==str3[i])
    {
        if(str1[i]==str2[i])
        {
            continue;
        }
         else{
            count++;
        }
    }    
    else
    {
        count+=2;
    }


  }
return count;



}
int main()
{
  char str1[102],str2[102],str3[102];
  scanf("%s",str1);
  scanf("%s",str2);
  scanf("%s",str3);
  int count=opr(str1,str2,str3);
  printf("%d",count);
    return 0;
}