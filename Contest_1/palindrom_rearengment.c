#include<stdio.h>
#include<string.h>
int main()
{
  char str[1001];
  scanf("%s",str);
  int len =strlen(str);
 char fstr[26]={0};

 for(int i=0;i<len;i++)
 {
    fstr[str[i]-'a']++;
 }
int count=0;
for(int i=0;i<26;i++)
{
    if(fstr[i]%2!=0)
    {
        count++;
    }

}

if(count>1)
{
 count=count-1;
}
else{
count=0;
}
printf("%d",count);
    return 0;
}