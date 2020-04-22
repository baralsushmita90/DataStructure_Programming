
#include<iostream>
using namespace std;
int main()
{
    int stack1[100];
    int stack2[100];
    int stack3[100];
    int c1,c2,c3,i,n;
    cout<<"\nEnter the number of stacks";
    cin>>n;
    for(i=0;i<n;i++)
    {
	
    cout<<"\nEnter the number of cylinders in stack"<<i+1;
    cin>>c1;
    
    for(i=0;i<c1;i++)
    {
    	cin>>stack1[i];
	}
	
	cout<<"Cylinders in stack"<<i+1<<"\n";
	for(i=0;i<c1;i++)
    {
    	cout<<stack1[i];
	}
	
	
}
	
	return 0;
}

