#include<stdio.h>
void main()
{
int i,n,Sum=0,numbers;
float Average;
printf("\nEnter How many Number\n");
scanf("%d",&n);
printf("\nEnter the elements\n");
for(i=0;i<n;++i)
{
scanf("%d",&numbers);
Sum = Sum +numbers;
}
Average = Sum/n;
printf("\nAverage of the %d Numbers = %.2f",n, Average);
}
