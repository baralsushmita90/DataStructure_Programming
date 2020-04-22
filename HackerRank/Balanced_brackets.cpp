
#include<iostream>
using namespace std;
char s[100];
int top=-1;
char stack_array[100];
void push(char br)
{
	top++;
	stack_array[top]=br;
	
	
}
char pop()
{
	
	top--;
	
}
int check_balance()
{
	int i,l=0;
	for(i=0;s[i]!='\0';i++)
	{
		l++;
		
	}
	cout<<"Length of string is:"<<l;
	for(i=0;i<l;i++)
	{
		if(s[i]=='{'||s[i]=='['||s[i]=='(')
		{
			push(s[i]);
		}
		else if(s[i]=='}'||s[i]==']'||s[i]==')')
		{
			if((s[i]=='}')&&(stack_array[top]=='{'))
			{
				pop();
			}
			else if((s[i]=='}')&&(stack_array[top]!='{'))
			{
				return 0;
			}
			if((s[i]==']')&&(stack_array[top]=='['))
			{
				pop();
			}
			else if((s[i]==']')&&(stack_array[top]!='['))
			{
				return 0;
			}
			if((s[i]==')')&&(stack_array[top]=='('))
			{
				pop();
			}
			else if((s[i]==')')&&(stack_array[top]!='('))
			{
				return 0;
			}
		}
	}
	if(top==-1)
	{
		return 1;
	}
	else
	return 0;
	
}
int main()
{
	int result;
	cout<<"\nEnter the string of brackets:";
	cin>>s;
	result=check_balance();
	if(result==0)
	cout<<"\nUnBalanced Brackets";
	else if(result==1)
	cout<<"\nBalanced Bracket";
	return 0;
}
