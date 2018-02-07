#include<stdio.h>
void main()
{
int a[50],i,k,size;
printf("\n enter the size of the array:");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
k=size/2;
printf("\n the middle element is %d",a[k]);
}
