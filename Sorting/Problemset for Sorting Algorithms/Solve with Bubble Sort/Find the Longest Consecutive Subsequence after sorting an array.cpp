#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int findLongestConsecutiveSubsequence(int arr[], int n)
{
    bubble_sort(arr, n);

    int longest = 1; 
    int current = 1;

    for (int i = 1; i < n; i++)
    {
        // current element is the same as the previous, skip it
        if (arr[i] == arr[i - 1])
            continue;

        // current element is consecutive
        if (arr[i] == arr[i - 1] + 1)
        {
            current++; 
        }
        else
        {
            longest = max(longest, current);
            current = 1; 
        }
    }

    longest = max(longest, current);

    return longest;
}

int main()
{
    int n;
    cin >> n; 
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findLongestConsecutiveSubsequence(arr, n) << endl;

    return 0;
}
