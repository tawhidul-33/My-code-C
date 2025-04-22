//input:-Data Structure Lab

/*
#include<stdio.h>
#include<string.h>

int is_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return 1;
    }
    return 0;
}

int count_vowel(char str[],int indx)
{
    if(str[indx]=='\0')
    {
        return;
    }
    if(is_vowel(str[indx])){
        return 1+count_vowel(str,indx+1);
    }
    else{
        return 0+count_vowel(str,indx+1);
    }
}


int main()
{ 
    char str[201];
    fgets(str,sizeof(str),stdin);
    int counts=count_vowel(str,0);
  printf("%d",counts);
    return 0;
}

//or
#include<stdio.h>
#include<string.h>

int is_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return 1;
    }
    return 0;
}
int count=0;
int count_vowel(char str[],int indx)
{
    if(str[indx]=='\0')
    {
        return;
    }
    if(is_vowel(str[indx])){
        count++;
        count_vowel(str,indx+1);
    }
    else{
        count_vowel(str,indx+1);
    }
    return count;
}


int main()
{ 
    char str[201];
    fgets(str,sizeof(str),stdin);
    int counts=count_vowel(str,0);
  printf("%d",counts);
    return 0;
}*/

//or
#include<stdio.h>
#include<string.h>
int count=0;
int count_vowel(char str[],int indx)
{
    if(str[indx]=='\0')
    {
        return;
    }

    if(str[indx]=='a'||str[indx]=='e'||str[indx]=='i'||str[indx]=='o'||str[indx]=='u'){
        count++;
    }
    if(str[indx]=='A'||str[indx]=='E'||str[indx]=='I'||str[indx]=='O'||str[indx]=='U'){
        count++;
    }
    count_vowel(str,indx+1);
    return count;
}


int main()
{ 
    char str[201];
    fgets(str,sizeof(str),stdin);
    int counts=count_vowel(str,0);
  printf("%d",counts);
    return 0;
}

