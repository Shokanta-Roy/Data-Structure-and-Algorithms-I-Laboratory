#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int k_th_smallest_element(int arr[], int n, int k)
{
    sort(arr, arr+n);
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