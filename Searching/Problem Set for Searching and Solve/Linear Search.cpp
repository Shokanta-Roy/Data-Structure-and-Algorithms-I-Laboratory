#include<bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}

int find_last_occurrence(int arr[], int size, int target)
{
    for (int  i = size-1; i >=0; --i)
    {
        if (arr[i]==target)
        {
            return i;
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
    //int result= find_first_occurrence(arr,n,target);
    int result= find_last_occurrence(arr,n,target);
    if (result== -1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<result<<endl; //printing index;
    }
    
    return 0;
}