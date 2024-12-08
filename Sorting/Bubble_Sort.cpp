#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void ascending_order(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swaped=false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if (! swaped)
        {
            break;
        }
        
    }
}
void descending_order(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swaped=false;
        for (int j=0; j< n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
            
        }
        if (! swaped)
        {
            break;
        }
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    descending_order(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    ascending_order(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}