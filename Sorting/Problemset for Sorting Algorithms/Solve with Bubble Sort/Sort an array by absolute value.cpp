#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubble_sort_with_ABS(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swaped=false;
        for (int j=0; j<n-i-1; j++)
        {
            if (abs(arr[j]) > abs(arr[j+1]))
            {
                swap(arr[j], arr[j+1]);
                swaped=true;
            }
            
        }
        if (!swaped)
        {
            break;
        }
    }
}


int main()
{
    int n; cin>>n;
    int arr[n+1];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort_with_ABS(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}