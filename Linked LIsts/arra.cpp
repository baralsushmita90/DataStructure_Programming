

#include <iostream>

using namespace std;
int main()
{
    int arr[5];
    int min,max;
    int min_sum=0,max_sum=0;
    cout<<"Enter array elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"Max:"<<max<<" ";
    cout<<"MIn:"<<min<<endl;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=min)
        {
              max_sum=max_sum+arr[i];
        }
        if(arr[i]!=max)
        {
            min_sum=min_sum+arr[i];
        }
    }
    cout<<min_sum<<" "<<max_sum;
    return 0;

    
}

