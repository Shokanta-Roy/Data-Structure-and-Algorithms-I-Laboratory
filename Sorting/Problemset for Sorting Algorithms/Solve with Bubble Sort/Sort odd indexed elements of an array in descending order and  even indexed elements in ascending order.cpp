#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort_ascending(int arr[], int n)
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
        if (!swapped) break;
    }
}

void bubble_sort_descending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void sort_odd_even_index_elements(int arr[], int n)
{
    int even_elements[n / 2 + 1]; 
    int odd_elements[n / 2];       
    int even_count = 0, odd_count = 0;

    // Separate even and odd indexed elements
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even_elements[even_count++] = arr[i];
        else
            odd_elements[odd_count++] = arr[i];
    }

    bubble_sort_ascending(even_elements, even_count);
    bubble_sort_descending(odd_elements, odd_count);

    // Merge 
    even_count = 0;
    odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            arr[i] = even_elements[even_count++];
        else
            arr[i] = odd_elements[odd_count++];
    }
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

    sort_odd_even_index_elements(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
