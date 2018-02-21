#include<stdio.h>
#include<conio.h>
void main()
{
int m,count=0,i;
clrscr();
printf("Enter value");
scanf("%d",&m);
for(i=2;i<=(m/2);i++)
{
if(m%i==0)
{
count++;
}
}
if(count==0)
printf("Prime number");
else
printf("Not a prime number");
getch();
}
