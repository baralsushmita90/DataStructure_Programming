#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int top=-1;
void push(int x)
{
    arr[++top]=x;
}
void pop()
{
    --top;
}
int max_element()
{
    int max=arr[0];

    for(int i=0;i<top;i++)
    {
         if(arr[i]>arr[0])
         max=arr[i];
     }
     
     return max;
}

int main() {
    
    int n,f,s,x,maximum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        if(f==1)
        {
        cin>>x;
        push(x);
        }
        else if(f==2)
        {
            pop();
        }
        else if(f==3)
        {  
           maximum = max_element();
           cout<<maximum<<"\n";
        }


    }
    return 0;
}

