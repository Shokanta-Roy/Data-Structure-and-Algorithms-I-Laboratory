#include<bits/stdc++.h>
using namespace std;

//for this problem we need to perform two separate searches
int find_first_occurrence(int arr[], int size, int target)
{
    int low=0, high=size-1,result=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;

        if (arr[mid] == target)
        {
            result= mid;//record the position
            high=mid-1; //continue search in the left side
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
    return result;
}

int find_last_occurrence(int arr[], int size, int target)
{
    int low=0, high=size-1, result=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==target)
        {
            result=mid; //record the position
            low=mid+1; //continue searching in the right side;
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
    return result;
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

    int result1= find_first_occurrence(arr,n,target);
    int result2= find_last_occurrence(arr,n,target);

    if (result1 != -1 && result2 != -1)
    {
        cout<<result1<<","<<result2<<endl;
    }
    else
    {
        cout<<"-1,-1"<<endl;
    }
    
    
    
}