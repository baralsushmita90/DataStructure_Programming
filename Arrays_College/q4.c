#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,l,j,count=1;
	printf("\nEnter the string:");
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		count=1;
		
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				count++;
				str[j]='$';
			}
			
		}
		if(str[i]!='$')
		printf("\nFrequency of %c:%d",str[i],count);
	}
	return 0;
	
}
