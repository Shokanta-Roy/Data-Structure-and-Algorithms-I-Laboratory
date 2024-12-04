#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int linear_search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        return -1;
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int x;
    cin>>x; //target elements.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    int result=linear_search(arr,size,x);
    if (result==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Fount at: "<<result<<endl; // found with index number;
    }
    
}