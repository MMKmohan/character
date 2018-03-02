#include<stdio.h>
void main()
{
int N,K,a[100],i;
printf("enter the values of N&K:  ");
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[K-1]);
}
