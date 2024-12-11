#include<bits/stdc++.h>
#include<algorithm>
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
            if (arr[j]> arr[j+1])
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
int k_th_smallest_element(int arr[], int n, int k)
{
    bubble_sort(arr,n);
    //sort(arr, arr+n);
    return arr[k-1];
}
int main()
{
    int n; cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k; cin>>k;
    cout<<k_th_smallest_element(arr,n,k)<<endl;
    
    return 0; 
}