#include<stdio.h>
#include<conio.h>
int a[50];
int n;

void bb_sort(int a[],int n)
{
     int i,j,temp;
     for(i=0;i<n;i++)
     {
          for(j=0;j<(n-1-i);j++)
          {
               if(a[j]>a[j+1])
               {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
          }
     }     
}

int find_index(int a[],int n,int num)
{
    int i;
    
    if(num<a[0])
    return 0;
    else
    for(i=0;i<n;i++)
    {
        if((num>a[i])&&(num<a[i+1]))
        return (i+1);                
    }    
    if(num>a[n])
    return n;
}

int main()
{
    int n,i,pos,num;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter elements of the array: ");
    for(i=0;i<n;i++)
    {
           scanf("%d",&a[i]);
    }
    bb_sort(a,n);    
    printf("\n Enter element to be inserted in the array: ");
    scanf("%d",&num);
    pos=find_index(a,n,num);

    //Now shifting elements of the array
    for(i=n-1;i>=pos;i--)
    {
          a[i+1]=a[i];
    }
    a[i+1]=num;
    n+=1;
    printf("\n Updated array is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    getch();
    return 0;
}
