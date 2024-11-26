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
    
    int arr[100];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i< 5-1; i++)
    {
        for (int  j = 0; j< 5-1-i; j++)
        {
            if (j % 2 == 0)
            {  // Only compare even indices
                if (arr[j] > arr[j + 2])
                {
                    //cout<<arr[j]<<" "<<arr[j+2]<<endl;
                    swap(arr[j], arr[j + 2]);
                   // cout<<arr[j]<<" "<<arr[j+2]<<endl;
                }
            }
            else if (j % 2 == 1 )
            {  // Only compare odd indices
                if (arr[j] < arr[j + 2])
                {
                    //cout<<arr[j]<<" "<<arr[j+2]<<endl;
                    swap(arr[j], arr[j + 2]);
                }
            }
            
            
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}