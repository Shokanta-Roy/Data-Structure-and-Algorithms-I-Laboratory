#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        if (min != i)
        {
            swap(arr[i],arr[min]);
        }
    }
    
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
  
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        
    


    return 0;
}