#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swaped=false;
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
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

int smallest_difference(int arr[], int n)
{
    bubble_sort(arr,n);
    int miniDiff=arr[1]-arr[0]; //initial
    for (int i = 2; i < n; i++)
    {
        int diff=arr[i]-arr[i-1];
        if (diff<miniDiff)
        {
            miniDiff=diff;
        }
        
    }
    return miniDiff;
}

int main()
{
    int n; cin>>n;
    int arr[n+1];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if (n<2)
    {
        return 0; // minimun 2 elements need;
    }
    
    cout<<smallest_difference(arr,n)<<endl;

    return 0;
}