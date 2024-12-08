#include<bits/stdc++.h>
using namespace std;

int find_insert_position(int arr[], int size, int target)
{
    int low=0, high=size-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]== target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            low= mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
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

    int result=find_insert_position(arr,n,target);
    cout<<result<<endl;
}