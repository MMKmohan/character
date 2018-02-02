#include <stdio.h>
void main()
{
int m,n,a;
printf("Enter m");
scanf("%d",&m);
printf("Enter n");    
scanf("%d",&n);
printf("\nODD NUMBERS BETWEEN GIVEN NUMBERS");
for (a=m;a<=n;a++)
{
if (a%2==1)                 
printf ("\n%d ",a);
}
}
