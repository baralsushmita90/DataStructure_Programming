#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,x,k,j,temp,num;
	printf("\nEnter the number of elements in an array:");
	scanf("%d",&n);
	printf("\nEnter the elements in sorted order:");
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the number of elements you want to enter:");
	scanf("%d",&num);
	for(k=0;k<num;k++)
	{
	
	printf("\nEnter the element to enter into the sorted list:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		
		if(x>arr[i]&&x<arr[i+1])
		{  
		      temp=arr[i+1];
		      arr[i+1]=x;
		      
		for(j=n+1;j>=i+2;j--)
		{
			arr[j]=arr[j-1];
			
		}
		arr[i+2]=temp;
		break;
		}
		
	}
	for(i=0;i<=n+k;i++)
	{
		printf("\narr[%d]:%d",i,arr[i]);
		
	}
  }  
	
}
