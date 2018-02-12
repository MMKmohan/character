#include <stdio.h>
void main() 
{
char a[1000],a1[1000];
int i,j;
printf("enter the string ");
scanf("%s%s",a,a1);
i=strlen(a);
j=strlen(a1);
if(i>=j)
printf("%s",a);
else
printf("%s",a1);
}
