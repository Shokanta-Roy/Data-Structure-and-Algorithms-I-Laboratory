#include<bits/stdc++.h>
using namespace std;

void find_all_occurrences(int arr[], int size, int target, int result[], int &size_of_result)
{
    size_of_result =0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            result[size_of_result++]=i;
        }
        
    }
    
}
int main()
{
    int n; cin>>n;
    int arr[n+1];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target; cin>>target;

    int result[n+1];
    int size_of_result;
    find_all_occurrences(arr,n,target,result,size_of_result);

    if (size_of_result>0)
    {
        cout<<"[";
        for (int i = 0; i < size_of_result; i++)
        {
            cout<<result[i]<<" ";
        }

        cout<<"]"<<endl;
    }
    else
    {
        cout<<"[ ]"<<endl;
    }
    
    return 0;
}