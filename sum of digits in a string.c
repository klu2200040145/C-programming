#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char s[100];
  printf("Enter a string : ");
  gets(s);
  int sum=0,i,len;
  len=strlen(s);
  for(i=0;i<len;i++)
  {
    if(isdigit(s[i]))
    sum=sum+(s[i]-'0');
  }
  printf("%d",sum);
  return 0;
}
