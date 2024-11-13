#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
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
    for(int i=0; i< n-1; i=i+2)
    {
        for (int  j = 0; j< n-1-i; j=j+2)
        {
            if (arr[j]> arr[j+2])
            {
                swap(arr[j], arr[j+2]);
            }
            
        }
        
    }
    for(int i=1; i< n-1; i=i+2)
    {
        for (int  j = 1; j< n-1-i; j=j+2)
        {
            if (arr[j]< arr[j+2])
            {
                swap(arr[j], arr[j+2]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}