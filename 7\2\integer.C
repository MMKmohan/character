#include <stdio.h>
#define MAXSIZE 1000
void main()
{
int arr[MAXSIZE];
int i, N;
printf("Enter size of array: ");
scanf("%d", &N);
printf("Enter %d elements in the array : ", N);
for(i=0; i<N; i++)
{
scanf("%d", &arr[i]);
}
printf("\nElements in array are: ");
for(i=0; i<N; i++)
{
printf("%d, ", arr[i]);
}
getch();
}
