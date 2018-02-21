#include <stdio.h>
#include <conio.h>
void main()
{
int n,count=0,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
{
count++;
}
}
if(count==0)
{
printf("No,it is not a composite number");
}
else
{
printf("Yes,it is a composite number");
}
}
