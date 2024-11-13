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
    for (int i = 0; i < n; i++)
    {
        int minimum_index=i;
        for (int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minimum_index])
            {
                minimum_index=j;
            }
            
        }
        swap(arr[minimum_index], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}