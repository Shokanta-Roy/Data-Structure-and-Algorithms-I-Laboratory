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
    for (int i = 0; i < n-1; i++)
    {
        bool swaped=false;
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }   
        }
        if (! swaped)
        {
            break;
        }
    }   
}

double median(int arr[],int n)
{
    bubble_sort(arr,n);
    if (n%2==0)
    {
        //even
        return (arr[n/2 - 1]+arr[n/2])/2.0;
    }
    else if (n%2 !=0)
    {
        //odd
        return arr[n/2];
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
    cout<<median(arr,n)<<endl;
    
}