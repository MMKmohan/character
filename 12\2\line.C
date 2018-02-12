#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char ch[500],i=0,c=0;
gets(ch);
while(ch[i]!=0)
{
if(ch[i]=='.')
{
  c++;
}
  else
  {
}
  i++;
}
printf("%d",c);
return 0;
}
