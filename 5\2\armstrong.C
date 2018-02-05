#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
int n,s=0,r,t,p=0;
scanf("%d",&n);
t=n;
while (n!=0)
{
n /= 10;
p++;
}
n=t;
while(n>0)
{
r=n%10;
s+=pow(r,p);
n/=10;
}
if(t==s)
printf("YES,it is a armstrong number");
else
printf("NO,it is a armstrong number");
getch();
}
