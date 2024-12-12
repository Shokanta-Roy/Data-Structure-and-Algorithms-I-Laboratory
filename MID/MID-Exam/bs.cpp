#include<bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int size, int target)
{
    int low=0, high=size-1,result=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;

        if (arr[mid] == target)
        {
            result= mid;//recorded
            high=mid-1; //search left
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
            result=mid; //recording
            low=mid+1; //search right side;
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

int counting_occurrences(int arr[], int size, int target)
{
    int result1= find_first_occurrence(arr,size,target);
    if(result1==-1)
    {
        return 0;
    }
    int result2= find_last_occurrence(arr,size,target);
    return result2-result1+1; // total= r2-r1 +1;
    
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

    int total=counting_occurrences(arr,n,target);
    if (total>0)
    {
        cout<<total<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
    
    
}