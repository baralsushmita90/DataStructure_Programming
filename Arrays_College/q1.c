#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter the number of elements in array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements in an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray in reverse order: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
