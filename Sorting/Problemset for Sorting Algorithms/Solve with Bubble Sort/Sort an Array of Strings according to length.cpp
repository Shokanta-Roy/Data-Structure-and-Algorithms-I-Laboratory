#include<bits/stdc++.h>
using namespace std;

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void bubble_sort_by_length(string arr[], int n)
{
    for (int i = 0; i < n; i++)  
    {
        bool swapped = false;  
        for (int j = 0; j < n - i - 1; j++)  
        {
            // Compare length of the strings
            if (arr[j].size() > arr[j + 1].size())
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;  
    string arr[n];  
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort_by_length(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
