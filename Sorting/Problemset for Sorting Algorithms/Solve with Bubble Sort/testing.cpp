//it's just for testing some random code;
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int x)
{
    int low=0, high=size-1;
    while (low<= high)
    {
        int mid= (low+(high-low))/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]< x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    return -1;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int x;
    cin>>x; //target elements.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    int result=binary_search(arr,size,x);
    if (result==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Fount at: "<<result<<endl; // found with index number;
    }
    
}