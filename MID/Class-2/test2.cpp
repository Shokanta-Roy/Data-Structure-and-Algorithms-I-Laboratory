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
            if (j%2==0)
            {
                if (arr[j]> arr[j+2])
                {
                    swap(arr[j], arr[j+2]);
                }
            }
            else if(j%2==1)
            {
                if (arr[j]< arr[j+2])
                {
                    swap(arr[j], arr[j+2]);
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