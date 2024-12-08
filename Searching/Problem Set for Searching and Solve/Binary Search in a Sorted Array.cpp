#include<bits/stdc++.h>
using namespace std;

//sorted in ascending order
int binary_search(int arr[], int size, int target)
{
    int low=0, high=size-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }

    return -1; //not found
}
int main()
{
    int n; cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target; cin>>target;

    int result= binary_search(arr,n,target);
    if (result== -1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    
    

    return 0;
}