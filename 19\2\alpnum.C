#include<stdio.h>
#include<stdio.h>
void main()
{
int i;
char s[100],a_count=0,n_count=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
a_count++;
}
if(s[i]>='0' && s[i]<='9')
{
n_count++;
}
}
if((a_count && n_count)>0)
printf("yes,it contains both alphabets&numbers");
else
printf("no,it does't contains both alphabets&numbers");
}
