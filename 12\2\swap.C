#include<stdio.h>
void main()
{
int temp,n1,n2;
printf("enter the numbers");
scanf("%d %d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
printf("%d %d",n1,n2);
}
