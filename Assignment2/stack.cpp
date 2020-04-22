#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[100000];
long long int max_num[100000];
long long int  largest,top=-1,top2=-1;
 
void push(long long int x)
{   
    
    arr[++top]=x;
    if(top==0)
    largest=x;
    if(x>largest)
    {
    	cout<<"\n"<<x<<"will be entered in max_num"<<"["<<top2+1<<"]";
        max_num[++top2]=x;
        largest=x;
    }
    else
    {
    	cout<<largest<<"will be entered in max_num"<<"["<<top2+1<<"]";
    	max_num[++top2]=largest;
	}
    
    cout<<"\nlargest="<<largest;
}
void pop()
{
    if(largest==arr[top])
    largest=arr[top-1];
    top2--;
    top--;
}
long long int max_element()
{
    return max_num[top2];
}
print_stacks()
{
	int i,j;
	cout<<"\nElements in stack:";
	for(i=0;i<=top;i++)
	{
		cout<<"\n"<<arr[i];
	}
	cout<<"\nElements in Max Stack:";
	for(j=0;j<=top2;j++)
	{
		cout<<"\n"<<max_num[j];
	}
}
int main() {
    
    long long int f,s;
    long long int n,x,maximum;
    cout<<"\nEnter the number of queries:";
    cin>>n;
    for(long long int i=0;i<=n;i++)
    {
    	cout<<"\nFirst:";
        cin>>f;
        if(f==1)
        {
        cout<<"Value:";
        cin>>x;
        push(x);
        print_stacks();
        }
        else if(f==2)
        {
            pop();
            print_stacks();
        }
        else if(f==3)
        {  
           print_stacks();
           maximum = max_element();
           cout<<"\nMaximum:"<<maximum;
        }


    }
    return 0;
}

