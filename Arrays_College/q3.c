#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int l,i,j,count=0;
	printf("\nEnter the string:");
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			str[j]='$';
		}
	}
	for(i=0;i<l;i++)
	{
		if(str[i]=='$')
		count++;
		
	}
	printf("\n%s",str);
	
	printf("\nNumber of duplicates:%d",count);
	return 0;
}
