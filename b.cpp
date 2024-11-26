#include<bits/stdc++.h>
using namespace std;

void swaps( int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int kth_smallest_element(int arr[], int n,int k)
{
    for(int i = 0; i < n-1; i++) //max k ta iteration
    {
        int minindex=i;
        for (int j = i+1; i < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }

        }
        swaps(arr[i],arr[minindex]);
    }
    return arr[k-1];
}



void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<kth_smallest_element(arr,n,k)<<endl;


}
int main()
{
    solve();
    return 0;
}
