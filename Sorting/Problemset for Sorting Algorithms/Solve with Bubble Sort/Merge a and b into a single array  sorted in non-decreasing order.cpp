#include <bits/stdc++.h>
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

void merge_and_sort(int a[], int n, int b[], int m)
{
    int merged[n + m];

    for (int i = 0; i < n; i++)
    {
        merged[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        merged[n + i] = b[i];
    }

    bubble_sort(merged, n + m);

    for (int i = 0; i < n + m; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    merge_and_sort(a, n, b, m);

    return 0;
}
