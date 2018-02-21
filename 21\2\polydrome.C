#include <stdio.h>
#include<string.h>
void main()
{
char s[100],a[100];
int l,i,j,count=0;
printf("enter your word  ");
scanf("%s",s);
l=strlen(s);
j=0;
for(i=l-1;i>=0;i--)
{
a[i]=s[j];
j=j+1;
}
for(i=0;i<l;i++)
{
if(s[i]==a[i])
count++;
else
continue;
}
if(count==l)
printf("yes,it is a polydrome");
else
printf("no,it is not a polydrome");
}
