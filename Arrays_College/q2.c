#include<stdio.h>
int main()
{
	int i;
	int arr1[10];
	int arr2[10];
	printf("\nEnter the elements of array 1:");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr1[i]);
		arr2[i]=arr1[i];
	}
	printf("\nElements of array 1 are:");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nElements of array 2 are:");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}
