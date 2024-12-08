#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > target)
        {
            return arr[i];
        }
        
    }
    return -1;
    
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

    int result= find(arr,n,target);
    if (target== -1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    
    return 0;
}