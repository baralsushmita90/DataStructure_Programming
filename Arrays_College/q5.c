#include<stdio.h>
int main()
{
	int arr[20];
	int even[20];
	int odd[20];
	int n,i,j=0,k=0;
	printf("\nEnter the number of elements in an array:");
	scanf("%d",&n);
	printf("\nEnter the integers in an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		if(arr[i]%2!=0)
		{
			odd[j]=arr[i];
			k++;
		}
	}
	printf("\nElements of even array are:");
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\nElements of odd array are:");
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	return 0;
	
	
}
