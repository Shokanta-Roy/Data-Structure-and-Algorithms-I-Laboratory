#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int target)
{
   int low=0,high=n-1;
   int mid= (low+high)/2;
    while(low<= high)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            high=mid-1;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        
    }
    return -1; //target not found;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target; 
    cin>>target;
    
    cout<<binary_search(arr,n,target)<<endl;
}