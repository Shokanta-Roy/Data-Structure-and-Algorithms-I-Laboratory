#include <bits/stdc++.h>
using namespace std;

void swaps(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swaps(arr[i], arr[minIndex]);
    }
}

int findKthSmallest(int arr[], int n, int k)
{
    selectionSort(arr, n);
    return arr[k-1];
}

int main()
{
    int arr[] = {5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int result = findKthSmallest(arr, n, k);
    cout <<  result << endl;

    return 0;
}

