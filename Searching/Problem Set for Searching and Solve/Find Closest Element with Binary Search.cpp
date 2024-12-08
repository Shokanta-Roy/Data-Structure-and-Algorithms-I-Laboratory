#include<bits/stdc++.h>
using namespace std;

int find_closest_element(int arr[], int size, int target)
{
    int low=0, high=size-1;

    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==target)
        {
            return arr[mid];
        }
        else if (arr[mid]<target)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }

    if (abs(arr[low]-target))
    {
        /* code */
    }
    
    
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


    
}