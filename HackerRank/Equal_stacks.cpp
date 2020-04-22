#include<iostream>
using namespace std;
int stack1[100000];
int stack2[100000];
int stack3[100000];
int n1,n2,n3,top1=-1,top2=-1,top3=-1;


void print()
{
	cout<<"\nElements in stack1:";
	for(int i=0;i<=top1;i++)
	{
		cout<<"\n"<<stack1[i];
	}
	cout<<"\nElements in stack2:";
	for(int i=0;i<=top2;i++)
	{
		cout<<"\n"<<stack2[i];
	}
	cout<<"\nElements in stack3:";
	for(int i=0;i<=top3;i++)
	{
		cout<<"\n"<<stack3[i];
	}
}
//To find sum of height?
int sum_stack(int stack_num,int n)
{   int s=0;
    if(stack_num==1)
    {
	
	for(int j=0;j<=n;j++)
	{
		s=s+stack1[j];
	}
          return s;
   }
   else if(stack_num==2)
    {
	
	for(int j=0;j<=n;j++)
	{
		s=s+stack2[j];
	}
         return s;
   }
   else if(stack_num==3)
    {
	
	for(int j=0;j<=n;j++)
	{
		s=s+stack3[j];
	}
        return s;
   }
   return s;
}


//POP Function
void pop(int stack_num)
{
	if(stack_num==1)
	{
		top1--;
	}
	else if(stack_num==2)
	{
		top2--;
	}
	else if(stack_num==3)
	{
		top3--;
	}
	
}

void push(int stack_num,int data)
{
	if(stack_num==1)
	{
		top1++;
		stack1[top1]=data;
		return;
	}
	else if(stack_num==2)
	{
		top2++;
		stack2[top2]=data;
		return;
	}
	else if(stack_num==3)
	{
		top3++;
		stack3[top3]=data;
		return;
	}
	
	
}

int main()
{
	int result,h,max_sum,sum1,sum2,sum3;
	cout<<"\nEnter the number of cylinders in stack 1:";
	cin>>n1;
	cout<<"\nEnter the number of cylinders in stack2:";
	cin>>n2;
	cout<<"\nEnter the number of cylinders in stack3";
	cin>>n3;
	cout<<"\nEnter the heights of cylinders in stack1";
	for(int i=0;i<n1;i++)
	{
		cout<<"\nEnter height";
		cin>>h;
		push(1,h);
	}
	cout<<"\nEnter the heights of cylinders in stack2";
	for(int i=0;i<n2;i++)
	{
		cout<<"\nEnter height";
		cin>>h;
		push(2,h);
		
		
	}
	cout<<"\nEnter the heights of cylinders in stack3";
	for(int i=0;i<n3;i++)
	{
		cout<<"\nEnter height";
		cin>>h;
		push(3,h);
	}
	print();
	sum1=sum_stack(1,top1);
	sum2=sum_stack(2,top2);
	sum3=sum_stack(3,top3);
	cout<<"\nSum of stack1:"<<sum1;
	cout<<"\nSum of stack2:"<<sum2;
	cout<<"\nSum of stack3:"<<sum3;
	
	while((sum1!=sum2)||(sum2!=sum3))
	{
		if(sum1>sum2){
			max_sum=sum1;
		}
		else
		{
			max_sum=sum2;
		}
		if(sum3>max_sum)
		{
			max_sum=sum3;
		}
		if(max_sum==sum1)
		{
			pop(1);
		}
		if(max_sum==sum2)
		{
			pop(2);
		}
		if(max_sum==sum3)
		{
			pop(3);
		}
		print();
		sum1=sum_stack(1,top1);
	    sum2=sum_stack(2,top2);
	    sum3=sum_stack(3,top3);
	    if(sum1==sum2==sum3)
	    {
	    	break;
		}
		
	}
	cout<<"\nsum1:"<<sum1;
	cout<<"\nsum2:"<<sum2;
	cout<<"\nsum3:"<<sum3;
	
	
	return 0;
	
}
