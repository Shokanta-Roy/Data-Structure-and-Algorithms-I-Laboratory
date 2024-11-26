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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i< n-1; i++)
    {
        for (int  j = 0; j< n-1-i; j++)
        {
            if (j % 2 == 0)
            {  // Only compare even indices
                if (arr[j] > arr[j + 2] && j+2<n)  //bound
                {
                    cout<<arr[j]<<" "<<arr[j+2]<<endl;
                    swap(arr[j], arr[j + 2]);
                   // cout<<arr[j]<<" "<<arr[j+2]<<endl;
                }
            }
            else if (j % 2 == 1 )
            {  // Only compare odd indices
                if (arr[j] < arr[j + 2] && j+2<n)
                {
                    cout<<arr[j]<<" "<<arr[j+2]<<endl;
                    swap(arr[j], arr[j + 2]);
                }
            }
            
            
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}